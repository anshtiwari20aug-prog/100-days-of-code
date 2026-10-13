#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int i=0;while(s[i]&&s[i]!='\n')i++;printf("%d\n",i);
return 0;
}
