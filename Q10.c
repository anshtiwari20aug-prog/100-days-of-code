#include <stdio.h>
int main() {
    int t;
    printf("Enter time in seconds: ");
    scanf("%d", &t);
    printf("%02d:%02d:%02d\n", t / 3600, (t % 3600) / 60, t % 60);
    return 0;
}
