#include<stdio.h>

int main() {
    int length, breadth, height, volume;
    printf("Enter length, breadth, and height of a cuboid:\n");
    scanf("%d%d%d", &length, &breadth, &height);
    volume = length * breadth * height;
    printf("The volume of is %d", volume);
    return 0;
}