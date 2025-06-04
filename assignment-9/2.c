#include<stdio.h>

int main(){
    int num, i, sum;
    printf("Sum of how many, even natural numbers you want to print on the screen:\n");
    scanf("%d", &num);
    for(sum=0, i=2; i<=2*num; i+=2){
        sum+=i;
    }
    printf("Sum of %d even natural numbers is %d", num, sum);
    return 0;
}