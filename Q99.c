#include <stdio.h>
#include <string.h>

int main(void) {
int d,m,y;scanf("%d/%d/%d",&d,&m,&y);char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};if(m<1||m>12){puts("Invalid month");return 0;}printf("%02d-%s-%04d\n",d,months[m-1],y);
return 0;
}
