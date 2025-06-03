#include<stdio.h>
#include<math.h>

int main() {
    int i;
    i = 1;
    while(i < 11){
        printf("%d^%d=%d\n", i, i, i * i);
        // printf("%d^%d=%2.f\n", i, i, pow(i, 2));
        i++;
    }
    return 0;
}