#include<stdio.h>

int main(){
    int a, b, l, flag, i, j;
    printf("Enter two number, i will tell you the lcm of these two numbers:\n");
    scanf("%d%d", &a, &b);
    l = 1;
    i = 2;
    flag = 0;
    while(a > 1 || b >1){
        if(a%i==0){
            a/=i;
            flag=1;
        }
        if(b%i==0){
            b/=i;
            flag=1;
        }
        if(flag){
            l *= i;
            flag=0;
        }else{
            i++;
        }
    }
    printf("LCM is %d", l);
    return 0;
}