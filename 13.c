#include<stdio.h>

int main()

{
    int hour, minute, second;
    printf("Enter time (hour minute second): ");
    scanf("%d %d %d", &hour, &minute, &second);

    if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
        printf("Valid Time\n");
    else
        printf("Invalid Time\n");

        return 0;
}