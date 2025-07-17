#include<stdio.h>

int main()
 {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x > 0 && y > 0)
        printf("Quadrant I\n");
    else if (x < 0 && y > 0)
        printf("Quadrant II\n");
    else if (x < 0 && y < 0)
        printf("Quadrant III\n");
    else if (x > 0 && y < 0)
        printf("Quadrant IV\n");
    else if (x == 0)
        printf("On Y-axis\n");
    else
        printf("On X-axis\n");


        return 0;
}