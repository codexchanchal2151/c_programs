#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;
    
    printf("Enter Principal amount, Rate of interest, and Time (in years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    // Compound interest formula: A = P(1 + R/100)^t
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    
    printf("Compound Interest = %.2lf\n", compound_interest);
    
    return 0;
}
