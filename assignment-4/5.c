#include<stdio.h>

int main() {
    int num, digit;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter a digit:\n");
    scanf("%d", &digit);
    num = num * 10 + digit;
    printf("The final number is %d.", num);
    return 0;
}