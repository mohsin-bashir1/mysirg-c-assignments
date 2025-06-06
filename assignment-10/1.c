#include<stdio.h>

int main(){
    int n, a, b, t, i;
    printf("Which term of fibonacci series you want to display on the screen.\n");
    scanf("%d", &n);
    for(a=-1, b=1, i=0; i<=n; i++){
        t=a+b;
        a=b;
        b=t;
    }
    printf("The term %d of fibonacii series is %d", n, t);
    return 0;
}