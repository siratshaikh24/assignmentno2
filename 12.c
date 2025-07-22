
#include<stdio.h>
int main()
{
    int a,b,c, max;
    printf("Enter 3 no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    max=a;
    else if(b>c)
    max=b;
    else
    max=c;
    printf("Maximum=%d\n",max);
    return 0;
}

