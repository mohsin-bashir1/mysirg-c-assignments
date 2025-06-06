#include<stdio.h>

int main(){
    int n, a, b, t, i;
    printf("Enter a number, to check it belongs to fibonacci series or not.\n");
    scanf("%d", &n);
    for(a=-1, b=1, i=0; ; i++){
        t=a+b;
        if(t==n){
            printf("%d belongs to fibonacii series and is term %d.", n, i);
            break;
        }
        if(t > n){
            printf("%d does not belongs to fibonacii series.", n);
            break;
        }
        a=b;
        b=t;
    }
    return 0;
}