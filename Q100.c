#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n");for(int i=0;i<n;i++)for(int j=i;j<n;j++){for(int k=i;k<=j;k++)putchar(s[k]);puts("");}
return 0;
}
