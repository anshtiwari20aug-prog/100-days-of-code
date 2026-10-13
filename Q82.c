#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i]&&s[i]!='\n';i++)printf("%c\n",s[i]);
return 0;
}
