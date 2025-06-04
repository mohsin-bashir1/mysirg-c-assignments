#include<stdio.h>

int main(){
    int num, i, sum;
    printf("Sum of how many, natural numbers you want to print on the screen:\n");
    scanf("%d", &num);
    for(i=1, sum=0; i<=num; i++){
        sum+=i;
    }
    printf("Sum of %d natural numbers is %d", num, sum);
    return 0;
}