#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++){char x=s[i];if(x>='A'&&x<='Z')x+=32;if(x!='a'&&x!='e'&&x!='i'&&x!='o'&&x!='u')putchar(s[i]);}
return 0;
}
