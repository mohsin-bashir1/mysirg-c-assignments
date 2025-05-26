#include<stdio.h>

int main() {
    int asciiCode;
    printf("Enter a ASCII code:\n");
    scanf("%d", &asciiCode);
    printf("Symbol at ASCII code %d is %c", asciiCode, asciiCode);
    return 0;
}