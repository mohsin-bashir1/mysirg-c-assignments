#include<stdio.h>

int main() {
    int num;
    printf("How many odd natural numbers you want to print on the screen in reverse order.\n");
    scanf("%d", &num);
    while(num){
        printf("%d\n", 2 * num - 1);
        num--;
    }
    return 0;
}