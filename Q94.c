#include <stdio.h>
#include <string.h>

int main(void) {
char s[2000],best[2000]="";fgets(s,sizeof s,stdin);int start=0,max=0;for(int i=0;;i++)if(s[i]==' '||s[i]=='\n'||s[i]=='\0'){int len=i-start;if(len>max){max=len;memcpy(best,s+start,len);best[len]=0;}if(!s[i]||s[i]=='\n')break;start=i+1;}puts(best);
return 0;
}
