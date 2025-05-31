#include<stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitPercentage, lossPercentage;
    printf("Enter cost price and selling price:\n");
    scanf("%f%f", &costPrice, &sellingPrice);
    if(sellingPrice - costPrice >= 0) {
        profitPercentage = (sellingPrice - costPrice) / costPrice * 100;
        printf("Profit Percentage = %.2f%%", profitPercentage);
    } else {
        lossPercentage = (costPrice - sellingPrice) / costPrice * 100;
        printf("Loss Percentage = %.2f%%", lossPercentage);
    }
    return 0;
}