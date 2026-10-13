#include <stdio.h>
#include <string.h>

int main(void) {
int r,c,i,j,a[30][30],b[30][30]; scanf("%d%d",&r,&c); for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&a[i][j]); for(i=0;i<r;i++)for(j=0;j<c;j++)scanf("%d",&b[i][j]); for(i=0;i<r;i++){for(j=0;j<c;j++)printf("%d ",a[i][j]+b[i][j]);puts("");}
return 0;
}
