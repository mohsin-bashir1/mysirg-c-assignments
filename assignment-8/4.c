#include<stdio.h>

int main() {
    int i, num;
    printf("How many odd natural numbers you want to print on the screen.\n");
    scanf("%d", &num);
    i = 0; // i = 1;
    while(i < num){
        printf("%d\n", 2 * i + 1); // 2 * i - 1
        i++;
    }
    return 0;
}