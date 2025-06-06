#include<stdio.h>

int main(){
    int a, b, i;
    printf("Enter two numbers, to find there HCF.\n");
    scanf("%d%d", &a, &b);
    for(i=a<b?a:b; i>=1; i--){
        if(a%i==0 && b%i==0){
            break;
        }
    }
    if(i==1){
        printf("%d and %d are co-prime numbers.", a, b);
    } else{
        printf("%d and %d are not co-prime numbers.", a, b);
    }
    return 0;
}