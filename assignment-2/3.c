#include<stdio.h>

int main() {
    int principleAmount, roi, tenure;
    float simpleInterest;
    printf("Enter principle amount, rate of interest, and time:\n");
    scanf("%d%d%d", &principleAmount, &roi, &tenure);
    simpleInterest = principleAmount * roi * tenure / 100.0;
    printf("The simple interest is %2.f", simpleInterest);
    return 0;
}