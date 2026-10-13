#include <stdio.h>
#include <string.h>

int main(void) {
int n,a[30][30],ok=1;scanf("%d",&n);for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][j]!=a[j][i])ok=0;puts(ok?"Symmetric":"Not Symmetric");
return 0;
}
