#include<stdio.h>

int main() {
    int i, num;
    printf("Table of which number, you want to print on the screen.\n");
    scanf("%d", &num);
    i = 1;
    while(i < 11){
        printf("%dx%d=%d\n", num, i, num*i);
        i++;
    }
    return 0;
}