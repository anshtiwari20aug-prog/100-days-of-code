#include <stdio.h>
int main() {
    double c;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);
    printf("Fahrenheit = %.2lf\n", (c * 9.0 / 5.0) + 32);
    return 0;
}
