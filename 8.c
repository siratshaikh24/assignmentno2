
#include<stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 7 == 0)
        printf("Number is divisible by 5 or 7\n");
    else
        printf("Number is not divisible by 5 or 7\n");

        return 0;

}
