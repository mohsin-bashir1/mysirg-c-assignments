#include<stdio.h>

int main(){
    int num, i, sum=0;
    printf("Sum of how many, odd natural numbers you want to print on the screen:\n");
    scanf("%d", &num);
    i = 1;
    while(i <= num){
        sum += 2*i-1;
        i++;
    }
    printf("Sum of %d odd natural numbers is %d", num, sum);
    return 0;
}