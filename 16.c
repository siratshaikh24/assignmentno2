#include<stdio.h>
int main()
{
    int m1, m2, m3, total;
    float average;
    printf("Enter marks for 3 subjects:");
    scanf("%d %d %d", &m1, &m2, &m3);
    total= m1 + m2 + m3;
    average = total / 3.0;


    printf("Total marks : %d\n" ,total);
    printf("Average Marks: %.2f\n" ,average);

    if(average >= 60)
    printf("Class : First Class\n");
    else if (average >= 50)
    printf("Class : Second Class\n");
    else if (average >=40)
    printf("Class :Pass Class\n");
    else
    printf("Fail\n");

    return 0;
}
