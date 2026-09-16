#include <stdio.h>
#include <math.h>
int main() {
    double p, r, t, si, amount;
    printf("Enter principal, rate and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    si = p * r * t / 100.0;
    amount = p * pow(1 + r / 100.0, t);
    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", amount - p);
    return 0;
}
