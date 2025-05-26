#include<stdio.h>

int main() {
    char symbol;
    printf("Enter a character:\n");
    scanf("%c", &symbol);
    printf("ASCII code of %c is %d", symbol, symbol);
    return 0;
}