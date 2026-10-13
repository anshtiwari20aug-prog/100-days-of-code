#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int start=1,last=0;for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]!=' '){if(start){last=i;start=0;}}else start=1;start=1;for(int i=0;i<last;i++)if(s[i]!=' '&&start){printf("%c. ",s[i]);start=0;}else if(s[i]==' ')start=1;puts(s+last);
return 0;
}
