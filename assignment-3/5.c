#include<stdio.h>

int main() {
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("The %d without last digit is %d.", num, num / 10);
    return 0;
}