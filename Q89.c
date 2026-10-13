#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000],ch;fgets(s,sizeof s,stdin);scanf(" %c",&ch);int count=0;for(int i=0;s[i];i++)if(s[i]==ch)count++;printf("%d\n",count);
return 0;
}
