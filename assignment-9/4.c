#include<stdio.h>

int main(){
    int num, i, sum=0;
    printf("Sum of squares, how many natural numbers you want to print on the screen:\n");
    scanf("%d", &num);
    i = 1;
    while(i <= num){
        sum += i*i;
        i++;
    }
    printf("Sum of squares of %d natural numbers is %d", num, sum);
    return 0;
}