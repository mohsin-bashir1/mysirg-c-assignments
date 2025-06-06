#include<stdio.h>

int main(){
    int n, a, b, t, i;
    printf("How many terms of fibonacci series you want to display on the screen.\n");
    scanf("%d", &n);
    for(a=-1, b=1, i=0; i<=n; i++){
        t=a+b;
        printf("%d ", t);
        a=b;
        b=t;
    }
    return 0;
}