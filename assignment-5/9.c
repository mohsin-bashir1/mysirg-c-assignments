#include<stdio.h>

int main() {
    int year;
    printf("Enter a year in YYYY format:\n");
    scanf("%d", &year);
    if(year % 100){
        // printf(year%4?"Non Leap Year": "Leap Year");
        if(year % 4) {
            printf("%d is not a leap year.");
        } else {
            printf("%d is a leap year.");
        }
    } else {
        // printf(year%400?"Non Leap Year": "Leap Year");
        if(year % 400) {
            printf("%d is not a leap year.");
        } else {
            printf("%d is a leap year.");
        }
    }
    return 0;
}