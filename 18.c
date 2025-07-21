#include<stdio.h>
int main()
{
    int days;
    int fine=0;
    printf("Enter number of late days:");
    scanf("%d", &days);
    if (days < 5)
    fine = days*1;
    else if(days<=10)
    fine=days*2;
    else
    fine=days*5;
    printf("Total fine: rs %d\n",fine);
    return 0;
}
