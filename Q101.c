#include <stdio.h>
int main(void) {
    int n,target,a[10000],first=-1,last=-1;
    if(scanf("%d",&n)!=1 || n<0 || n>10000) return 0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&target);
    int l=0,r=n-1;
    while(l<=r){int m=l+(r-l)/2;if(a[m]>=target){if(a[m]==target)first=m;r=m-1;}else l=m+1;}
    l=0;r=n-1;
    while(l<=r){int m=l+(r-l)/2;if(a[m]<=target){if(a[m]==target)last=m;l=m+1;}else r=m-1;}
    printf("%d %d\n",first,last);
    return 0;
}
