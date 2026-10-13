#include <stdio.h>
#include <string.h>

int main(void) {
char s[2000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n"),start=0;for(int i=0;i<=n;i++)if(i==n||s[i]==' '){for(int j=i-1;j>=start;j--)putchar(s[j]);if(i<n)putchar(' ');start=i+1;}puts("");
return 0;
}
