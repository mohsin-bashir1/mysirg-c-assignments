#include<stdio.h>

int main() {
    int num, i;
    printf("How many natural numbers you want to print on the screen.\n");
    scanf("%d", &num);
    i = 1;
    while(i <= num){
        printf("%d\n", i);
        i++;
    }
    return 0;
}