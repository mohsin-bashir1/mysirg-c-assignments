#include<stdio.h>

int main(){
    int a, b, l;
    printf("Enter two number, i will tell you the lcm of these two numbers:\n");
    scanf("%d%d", &a, &b);
    l = a>b?a:b;
    while(l <= a*b){
        if(l%a == 0 && l%b == 0){
            printf("LCM of %d and %d is %d", a, b, l);
            break;
        }
        l++;
    }
    return 0;
}