#include<stdio.h>
int main ()
{
    int a,b,c,max;
    printf("Enter 3 Number");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Maximum=%d\n",max);
return 0;
}

