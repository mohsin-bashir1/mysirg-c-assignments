#include<stdio.h>

int main() {
    int hour, minute, second;
    printf("Enter your date of birth time in (HH:MM:SS) format:\n");
    scanf("%d:%d:%d", &hour, &minute, &second);
    printf("Hour - %d, Minute - %d, Second - %d", hour, minute, second);
    return 0;
}