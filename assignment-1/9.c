#include<stdio.h>

int main() {
    int length, breadth, area;
    printf("Enter length and breadth of a rectangle:\n");
    scanf("%d%d", &length, &breadth);
    area = length * breadth;
    printf("Area of a rectangle with length = %d and breadth = %d is %d meter square.", length, breadth, area);
    return 0;
}