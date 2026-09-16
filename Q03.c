#include <stdio.h>
int main() {
    double l, b;
    printf("Enter length and breadth: ");
    scanf("%lf %lf", &l, &b);
    printf("Area = %.2lf\n", l * b);
    printf("Perimeter = %.2lf\n", 2 * (l + b));
    return 0;
}
