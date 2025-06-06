#include<stdio.h>

int main(){
    int i, sum=0, num, temp, count, power, digit;
    printf("Enter a number, i will print is this number armstrong number or not on screen:\n");
    scanf("%d", &num);
    temp=num;
    count=0;
    while(temp){
        temp/=10;
        count++;
    }
    for(temp=num; temp; temp/=10){
        digit = temp%10;
        for(i=1, power=1; i<=count; i++){
            power*=digit;
        }
        sum = sum + power;
    }
    if(sum==num){
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }
    return 0;
}