#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(s[i]==' ')s[i]='-';printf("%s",s);
return 0;
}
