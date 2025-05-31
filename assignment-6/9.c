#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the lengths of sides of a triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a) {
        printf("Valid triangle.");
    } else {
        printf("Not a valid triangle.");
    }
    return 0;
}