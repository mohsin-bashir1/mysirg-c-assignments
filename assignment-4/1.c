#include<stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);
    // sum = x/100 + x/10%10 + x%10
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    printf("The sum of the digits of %d is %d.", num, sum);
    return 0;
}