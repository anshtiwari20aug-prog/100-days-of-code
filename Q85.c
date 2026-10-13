#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n");for(int i=n-1;i>=0;i--)putchar(s[i]);puts("");
return 0;
}
