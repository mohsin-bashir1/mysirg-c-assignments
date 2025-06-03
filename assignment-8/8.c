#include<stdio.h>
#include<math.h>

int main() {
    int i, num;
    printf("Squares of how many natural numbers you want to print on the screen.\n");
    scanf("%d", &num);
    i = 1;
    while(i <= num){
        printf("%d^%d=%d\n", i, i, i * i);
        // printf("%d^%d=%2.f\n", i, i, pow(i, 2));
        i++;
    }
    return 0;
}