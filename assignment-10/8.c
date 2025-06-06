#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter a number, i will print next prime after it on the screen:\n");
    scanf("%d", &n);
    for(i=n+1; ; i++){
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("Next prime number is %d ", i);
            break;
        }
    }
    return 0;
}