#include<stdio.h>

int main() {
    int i;
    i = 0;
    while(i < 10){
        printf("%d\n", 21 - (2 * i + 1));
        i++;
    }
    return 0;
}