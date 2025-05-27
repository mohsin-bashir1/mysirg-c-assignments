#include<stdio.h>

int main() {
    int num;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);
    num = num % 10 * 100 + num/10;
    printf("The number with digits rotated by one position towards the right is %d",num);
    return 0;
}