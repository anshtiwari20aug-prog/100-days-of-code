#include <stdio.h>
int main() {
    double r;
    const double PI = 3.141592653589793;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Area = %.2lf\n", PI * r * r);
    printf("Circumference = %.2lf\n", 2 * PI * r);
    return 0;
}
