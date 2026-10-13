#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int start=1;for(int i=0;s[i];i++)if(s[i]!=' '&&s[i]!='\n'&&start){putchar(s[i]);putchar(' ');start=0;}else if(s[i]==' ')start=1;puts("");
return 0;
}
