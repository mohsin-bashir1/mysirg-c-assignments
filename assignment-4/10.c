#include<stdio.h>

int main() {
    int x;
    x = 3 < 0 && 5 > 0; //LR
    printf("The value of x is %d", x);
    return 0;
}