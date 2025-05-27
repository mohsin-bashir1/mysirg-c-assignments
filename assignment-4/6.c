#include<stdio.h>

int main() {
    double rupees, dollar;
    printf("Enter amount in INR.\n");
    scanf("%lf", &rupees);
    dollar = rupees/84.23;
    printf("USD %0.2lf", dollar);
    return 0;
}