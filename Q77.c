#include <stdio.h>
#include <string.h>

int main(void) {
int n,a[50][50],ok=1;scanf("%d",&n);for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][i]==a[j][j])ok=0;puts(ok?"Distinct":"Not Distinct");
return 0;
}
