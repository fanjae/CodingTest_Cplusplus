#include <stdio.h>
int main(void)
{
    int n;
	 scanf("%d",&n);
	 printf("%c%c\n",'A'+(n+8)%12,'0'+(n+6)%10);
	 return 0;
}