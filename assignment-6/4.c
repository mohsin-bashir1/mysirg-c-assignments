#include<stdio.h>

int main() {
    char letter;
    printf("Enter any english letter in lower or upper case:\n");
    scanf("%c", &letter);
    if(letter >= 'A' && letter <= 'Z') {
        printf("%c is a uppercase letter.", letter);
    } else if (letter >= 'a' && letter <= 'z'){
        printf("%c is lowercase letter.", letter);
    } else {
        printf("%c is not a letter.", letter);
    }
    return 0;
}