#include<stdio.h>

int main() {
    int month;
    printf("Enter month number between 1 and 12:\n");
    scanf("%d", &month);
    if(month == 2) {
        printf("Month Number %d has 28 or 29 days.", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        printf("Month Number %d has 30 days.", month);
    } else {
        printf("Month Number %d has 31 days.", month);
    }
    return 0;
}