#include<stdio.h>

int main() {
    int a, b, c, discriminant;
    printf("Enter a, b, c values of quadratic equation:\n");
    scanf("%d%d%d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if(discriminant < 0) {
        printf("The quadratic equation will have two imaginary roots.");
    } else if(discriminant > 0) {
        printf("The quadratic equation will have two real and distinct roots.");
    } else {
        printf("The quadratic equation will have two real and equal roots.");
    }
    return 0;
}