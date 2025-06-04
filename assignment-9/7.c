#include<stdio.h>

int main(){
    int num, count, temp;
    printf("Enter any number, i will tell the number of digts in respective number:\n");
    scanf("%d", &num);
    temp=num;
    for(count = 0; num; num/=10){
        count++;
    }
    printf("%d has %d digits", temp, count);
    return 0;
}