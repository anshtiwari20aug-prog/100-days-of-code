#include <stdio.h>
int main(void){
    int n,a[10000];long long result[10000],prefix=1,suffix=1;
    if(scanf("%d",&n)!=1 || n<0 || n>10000)return 0;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++){result[i]=prefix;prefix*=a[i];}
    for(int i=n-1;i>=0;i--){result[i]*=suffix;suffix*=a[i];}
    for(int i=0;i<n;i++){if(i)putchar(' ');printf("%lld",result[i]);}
    putchar('\n');return 0;
}
