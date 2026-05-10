Q. For a 3 digit number, check if all the digits are distinct.


#include <stdio.h>

int main() {
    int a, f, m, l;

    printf("Enter a 3 digit number: ");
    scanf("%d", &a);

    l = a % 10;        
    m = (a / 10) % 10;  
    f = a / 100;        

    if (f != m && m != l && f != l)
        printf("All digits are unique");
    else
        printf("Digit repeated");

    return 0;
}
