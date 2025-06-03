#include<stdio.h>

int main() {
    int i, num;
    printf("How many odd natural numbers you want to print on the screen in reverse order.\n");
    scanf("%d", &num);
    i = 0;
    while(i < num){
        printf("%d\n", num * 2 - (2*i+1));
        i++;
    }
    return 0;
}