#include<stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(num % 7 == 0 || num % 3 == 0) {
        printf("%d is divisible by 7 or 3 or by both.", num);
    } else {
        printf("%d is neither divisible by 7 nor by 3.", num);
    }
    return 0;
}