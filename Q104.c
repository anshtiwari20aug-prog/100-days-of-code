#include <stdio.h>
#include <math.h>
int main(void){
    long long n;
    if(scanf("%lld",&n)!=1 || n<1)return 0;
    long long total=n*(n+1)/2;
    long long x=(long long)sqrt((double)total);
    while(x*x<total)x++;
    while(x*x>total)x--;
    printf("%lld\n",x*x==total?x:-1LL);
    return 0;
}
