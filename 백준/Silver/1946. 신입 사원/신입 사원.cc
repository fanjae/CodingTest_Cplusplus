#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int n;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		int ans = 0;
		int max_rank = 0;
		
		vector < vector<int>> vect(n, vector<int>(1,2));
		for(int i=0; i<n; i++)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			vect[i][0] = x;
			vect[i][1] = y;
		}
		
		sort(vect.begin(),vect.end());
		
		ans = 1;
		max_rank = vect[0][1];
		for(int i=1; i<n; i++)
		{
			if(vect[i][1] < max_rank)
			{
				max_rank = vect[i][1];
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}