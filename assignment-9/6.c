#include<stdio.h>

int main(){
    int num, fact=1, temp;
    printf("Enter a number, of which you want find the factorial:\n");
    scanf("%d", &num);
    temp = num;
    while(num){
        fact *= num;
        num--;
    }
    printf("Factorial is %d is %d", temp, fact);
    return 0;
}