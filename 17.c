#include<stdio.h>
int main()
{
    int qty1,qty2,qty3; 
    float rate1,rate2,rate3;
    float total,discount=0;
    printf("Enter quantity and rate for item 1:");
    scanf("%d%f",&qty1,&rate1);
    printf("Enter quantity and rate for item 2:");
    scanf("%d%f",&qty2,&rate2);
    printf("Enter quantity and rate for item 1:");
    scanf("%d%f",&qty2,&rate2);
    total=(qty1 * rate1)+(qty2 * rate2)+(qty3 * rate3);
    if(total>5000)
    discount=total*0.20;
else if(total >=3000)
    discount=total*0.15;
else if(total >=1000)
discount=total*0.08;
printf("\n Total sales Amount:rs %.2f\n",total);
printf("\n Amount to pay:rs %.2f\n",total-discount);
return 0;
}
