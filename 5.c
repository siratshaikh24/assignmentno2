#include<stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        if (num % 7 == 0)
            printf("Number is divisible by both 5 and 7\n");
        else
            printf("Number is divisible by 5 but not by 7\n");
    } else
        printf("Number is not divisible by 5\n");
        
        return 0;
}