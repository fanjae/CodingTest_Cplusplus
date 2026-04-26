#include <stdio.h>
#include <stack>

using namespace std;
int main(void)
{
	long long int ans = 0;
	stack<int> guitar[10];
	int n,p;
	scanf("%d %d",&n,&p);
	
	for(int i=1; i<=n; i++)
	{
		int top, target_p;
		scanf("%d %d",&top,&target_p);
		
		if(guitar[top].empty() || guitar[top].top() < target_p)
		{
			guitar[top].push(target_p);	
			ans++;
		}
		else if(guitar[top].top() > target_p)
		{
			while(!guitar[top].empty() && guitar[top].top() > target_p)
			{
				guitar[top].pop();
				ans++;
			}
			if(guitar[top].empty() || guitar[top].top() != target_p)
			{
				guitar[top].push(target_p);
				ans++;
			}
		}
	}
	printf("%lld\n",ans);
}
	
	