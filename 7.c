#include <stdio.h>
int main()
 {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if(marks > 75) {
        printf("Grade: Distinction\n");
    }
    else if(marks >= 60 && marks <= 75) {
        printf("Grade: First Class\n");
    }
    else if(marks >= 50 && marks < 60) {
        printf("Grade: Second Class\n");
    }
    else if(marks >= 40 && marks < 50) {
        printf("Grade: Pass Class\n");
    }
    else {
        printf("Grade: Fail\n");
    }
    return 0;
}