#include<stdio.h>

int main() {
    int age = 26;
    float fee = 2400;
    double price = 6999.00;
    char grade = 'A';
    printf("The size of int variable is %d\nfloat variable is %d\ndouble variable is %d\nchar variable is %d.", sizeof(age), sizeof(fee), sizeof(price), sizeof(grade));
    return 0;
}