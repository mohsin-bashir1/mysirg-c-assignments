#include<stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(!(num % 2)) {
        printf("%d is even number.", num);
    } else {
        printf("%d is odd number.", num);
    }
    return 0;
}