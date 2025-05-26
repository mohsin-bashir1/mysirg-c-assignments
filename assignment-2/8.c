#include<stdio.h>

int main() {
    char c1, c2, c3;
    printf("Enter three characters:\n");
    scanf("%c %c %c", &c1, &c2, &c3);
    printf("ASCII code of %c is %d.\n", c1, c1);
    printf("ASCII code of %c is %d.\n", c2, c2);
    printf("ASCII code of %c is %d", c3, c3);
    return 0;
}