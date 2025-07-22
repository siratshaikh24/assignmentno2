#include <stdio.h>

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57) {
        printf("The character is a Digit.\n");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("The character is an Uppercase Letter.\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("The character is a Lowercase Letter.\n");
    }
    else
    {
        printf("The character is neither a digit nor an alphabet.\n");
    }
    return 0;
}
