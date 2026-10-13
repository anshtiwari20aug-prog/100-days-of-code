#include <stdio.h>
#include <string.h>

int main(void) {
char a[1000],b[1000];fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);a[strcspn(a,"\n")]=0;b[strcspn(b,"\n")]=0;int n=strlen(a),ok=0;if(n==(int)strlen(b))for(int shift=0;shift<n||(!n&&shift==0);shift++){int same=1;for(int j=0;j<n;j++)if(a[(j+shift)%n]!=b[j])same=0;if(same)ok=1;}puts(ok?"Rotation":"Not Rotation");
return 0;
}
