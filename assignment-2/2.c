#include<stdio.h>
#define PI 3.14

int main() {
    int radius;
    float circumference;
    printf("Enter radius of circle:\n");
    scanf("%d", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of circle is %.2f, having radius %d.", circumference, radius);
    return 0;
}