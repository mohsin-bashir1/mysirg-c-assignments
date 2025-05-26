#include<stdio.h>
const float PI = 3.141592653489793;

int main() {
    int radius;
    float area;
    printf("Enter the radius of circle:\n");
    scanf("%d", &radius);
    area = PI * (radius * radius);
    printf("Area of a circle is %.2f having the radius %d.", area, radius);
    return 0;
}