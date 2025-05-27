#include<stdio.h>

int main() {
    int num = 2345;
    int temp = num;
    num = num / 10 * 10;
    printf("The last digit of %d is now zero. See %d", temp, num);
    return 0;
}