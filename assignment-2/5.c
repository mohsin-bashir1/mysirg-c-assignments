#include<stdio.h>

int main() {
    float costPrice, sellingPrice, pl;
    printf("Enter cost price and selling price of a dozen of banana:\n");
    scanf("%f%f", &costPrice, &sellingPrice);
    pl = (sellingPrice - costPrice) * 25 / 12;
    printf("profit or loss is %f", pl);
    return 0;
}