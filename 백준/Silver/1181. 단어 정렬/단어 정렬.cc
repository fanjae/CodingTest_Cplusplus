#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
struct word
{
	int len;
	char data[55];
};
bool cmp(word a,word b)
{
	return ((a.len < b.len) || ((a.len == b.len) && (strcmp(a.data,b.data) < 0)));
}
int main()
{
	struct word good[20005];
	int n;
	char *temp;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%s",good[i].data);
		good[i].len = strlen(good[i].data);
	}
	sort(good,good+n,cmp);
	temp = good[0].data;
	printf("%s\n",good[0].data);
	for(int i=1; i<n; i++)
	{
		if(strcmp(temp,good[i].data) == 0)
		{
			
		}
		else
		{
			temp = good[i].data;
			printf("%s\n",good[i].data);
		}
	}
}