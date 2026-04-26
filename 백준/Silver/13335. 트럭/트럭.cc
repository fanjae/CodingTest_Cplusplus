#include <stdio.h>
#include <stdbool.h>
#include <queue>
using namespace std;

int n,w,l;
int main(void)
{
	int data[105];
	int sum = 0;
	int cnt = 0;
	int t;
	scanf("%d %d %d",&n,&l,&w);
	queue<int> que;
	while(n--)
	{
		scanf("%d",&t);
		
		while(1)
		{
			if(que.empty() == true)
			{
				que.push(t);
				sum += t;
				cnt++;
				break;
			}
			else if(que.size() == l)
			{
				sum -= que.front();
				que.pop();
			}
			else
			{
				if(sum + t > w)
				{
					que.push(0);
					cnt++;
				}
				else
				{
					sum += t;
					que.push(t);
					cnt++;
					break;
				}
			}
		}
	}
	sum -= t;
	printf("%d",cnt+l);
}