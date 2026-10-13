#include <stdio.h>
#include <string.h>

int main(void) {
char a[1000],b[1000];int f[256]={0},ok=1;fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);for(int i=0;a[i]&&a[i]!='\n';i++)f[(unsigned char)a[i]]++;for(int i=0;b[i]&&b[i]!='\n';i++)f[(unsigned char)b[i]]--;for(int i=0;i<256;i++)if(f[i])ok=0;puts(ok?"Anagrams":"Not Anagrams");
return 0;
}
