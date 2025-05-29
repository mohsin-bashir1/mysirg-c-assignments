#include<stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(num > 99 && num <= 999) {
        printf("%d is a three digit number.", num);
    } else {
        printf("%d is not a three digit number.", num);
    }
    return 0;
}