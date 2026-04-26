#include <stdio.h>
#include <string.h>
using namespace std;
int main(void)
{
	int len,len2;
	int count = 0;
	int ans = 0;
	char dat[5000];
	char dat2[500];
	gets(dat);
	gets(dat2);

	char *ptr = strstr(dat,dat2);
	len2 = strlen(dat2);
	while(ptr != NULL)
	{
		ans++;
		ptr = strstr(ptr+len2,dat2);
	}
	
	printf("%d\n",ans);
}