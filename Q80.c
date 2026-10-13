#include <stdio.h>
#include <string.h>

int main(void) {
int r,c,k,d,a[30][30],b[30][30];scanf("%d%d",&r,&c);for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);scanf("%d%d",&k,&d);for(int i=0;i<k;i++)for(int j=0;j<d;j++)scanf("%d",&b[i][j]);if(c!=k){puts("Multiplication not possible");return 0;}for(int i=0;i<r;i++){for(int j=0;j<d;j++){int sum=0;for(int t=0;t<c;t++)sum+=a[i][t]*b[t][j];printf("%d ",sum);}puts("");}
return 0;
}
