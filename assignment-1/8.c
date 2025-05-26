#include<stdio.h>

int main() {
    int num1, square;
    printf("Enter a number:\n");
    scanf("%d", &num1);
    square = num1 * num1;
    printf("Square of %d is %d.", num1, square);
    return 0;
}