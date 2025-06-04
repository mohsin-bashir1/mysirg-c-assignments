#include<stdio.h>

int main(){
    int num, i;
    printf("Enter a natural number, i will tell is this number prime or composite number:\n");
    scanf("%d", &num);
    for(i=2; i<num; i++){
        if(num%i==0){
            break;
        }
    }
    if(i == num){
        printf("%d is prime number.", num);
    } else{
        printf("%d is composite number.", num);
    }
    return 0;
}