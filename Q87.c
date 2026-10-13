#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];int spaces=0,digits=0,special=0;fgets(s,sizeof s,stdin);for(int i=0;s[i]&&s[i]!='\n';i++){char x=s[i];if(x==' ')spaces++;else if(x>='0'&&x<='9')digits++;else if(!((x>='a'&&x<='z')||(x>='A'&&x<='Z')))special++;}printf("Spaces: %d\nDigits: %d\nSpecial: %d\n",spaces,digits,special);
return 0;
}
