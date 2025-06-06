#include<stdio.h>

int main(){
    int i, temp, sum, n, count, power, digit;
    printf("All Armstrong numbers under 1000 are:\n");
    for(n=1; n<=1000; n++) {
        temp=n;
        count=0;
        sum=0;
        while(temp){
            temp/=10;
            count++;
        }
        for(temp=n; temp; temp/=10){
            digit = temp%10;
            for(i=1, power=1; i<=count; i++){
                power*=digit;
            }
            sum = sum + power;
        }
        if(sum==n){
            printf("%d ", n);
        }
    }
    return 0;
}