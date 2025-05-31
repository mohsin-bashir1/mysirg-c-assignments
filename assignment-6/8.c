#include<stdio.h>

int main() {
    char character;
    printf("Enter any character:\n");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z') {
        printf("%c is a uppercase character.", character);
    } else if (character >= 'a' && character <= 'z'){
        printf("%c is lowercase character.", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.", character);
    } else {
        printf("%c is a special character.", character);
    }
    return 0;
}