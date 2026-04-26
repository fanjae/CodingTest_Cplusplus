#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct data
{
	int age;
	char name[105];
	int order;
}data;
int compare(const data &a, const data &b)
{
	if(a.age > b.age || a.age < b.age)
	{
		return a.age < b.age;
	}
	else
	{
		return a.order < b.order;
	}
}
data judge[100005];
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d ",&judge[i].age);
		scanf("%s",judge[i].name);
		judge[i].order = i+1;
	}
	sort(judge,judge+n,compare);
	for(int i=0; i<n; i++)
	{
		printf("%d %s\n",judge[i].age,judge[i].name);
	}
	
}
	