#include <stdio.h>
#include <string.h>

int main(void) {
char s[1000];int seen[26]={0};fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z'){int k=s[i]-'a';if(seen[k]){printf("%c\n",s[i]);return 0;}seen[k]=1;}puts("-1");
return 0;
}
