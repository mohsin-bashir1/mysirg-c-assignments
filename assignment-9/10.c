#include<stdio.h>

int main(){
    int num, i, rev=0;
    printf("Enter a number, i will give you the reverse of that number:\n");
    scanf("%d", &num);
    while(num){
        rev *=10 + (num % 10);
        num/=10;
    }
    printf("Reverse of %d is %d", num, rev);
    return 0;
}