#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];fgets(s,sizeof s,stdin);int n=strcspn(s,"\n"),ok=1;for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])ok=0;puts(ok?"Palindrome":"Not Palindrome");
return 0;
}
