Q. Take a character and check whether its uppercase,lowercase,a digit or special character.

#include <stdio.h>

int main() {
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z')
        printf("The character is an uppercase letter");

    else if (a >= 'a' && a <= 'z')
        printf("The character is a lowercase letter");

    else if (a >= '0' && a <= '9')
        printf("It is a digit");

    else
        printf("It is a special character");

    return 0;
}
