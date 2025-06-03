#include<stdio.h>

int main() {
    int i, num;
    printf("How many even natural numbers you want to print on the screen.\n");
    scanf("%d", &num);
    i = 0;
    while(i < num){
        printf("%d\n", 2 * i + 2);
        i++;
    }
    return 0;
}