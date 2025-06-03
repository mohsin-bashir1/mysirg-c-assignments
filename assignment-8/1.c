#include<stdio.h>

int main() {
    int num, i;
    printf("How many times you want to print MySirG on the screen.\n");
    scanf("%d", &num);
    i = 0;
    while(i < num){
        printf("MySirG\n");
        i++;
    }
    return 0;
}