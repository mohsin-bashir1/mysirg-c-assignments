#include<stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(num > 0) {
        printf("%d is positive number.", num);
    } else if (num < 0) {
        printf("%d is negative number.", num);
    } else {
        printf("%d is zero, neither positive nor negative.", num);
    }
    return 0;
}