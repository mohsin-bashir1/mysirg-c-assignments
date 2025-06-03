#include<stdio.h>

int main() {
    int num;
    printf("How many even natural numbers you want to print on the screen in reverse order.\n");
    scanf("%d", &num);
    while(num){
        printf("%d\n", 2 * num);
        num--;
    }
    return 0;
}