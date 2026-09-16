#include <stdio.h>
int main() {
    long long n;
    printf("Enter n: ");
    scanf("%lld", &n);
    printf("Sum = %lld\n", n * (n + 1) / 2);
    return 0;
}
