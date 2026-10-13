#include <stdio.h>
#include <string.h>

int main(void) {
int n,x,sum=0;scanf("%d",&n);for(int i=0;i<n;i++)for(int j=0;j<n;j++){scanf("%d",&x);if(i==j)sum+=x;}printf("%d\n",sum);
return 0;
}
