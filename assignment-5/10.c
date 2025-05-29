#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b) {
        // code can replaced with conditional operator
        if(a > c) {
            printf("%d is greatest number.", a);
        } else {
            printf("%d is greatest number.", c);
        }
    } else {
        if(b > c) {
            printf("%d is greatest number.", b);
        } else {
            printf("%d is greatest number.", c);
        }
    }
    return 0;
}