#include<stdio.h>

int main() {
    float s1, s2, s3, s4, s5, total;
    printf("Enter marks of 5 subjects out of 100:\n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    if(s1 >= 33 && s2 >= 33 && s3 >= 33 && s4 >= 33 && s5 >= 33) {
        printf("Passed, Total Marks: %.2f", total);
    } else {
        printf("Failed, Total Marks: %.2f", total);
    }
    return 0;
}