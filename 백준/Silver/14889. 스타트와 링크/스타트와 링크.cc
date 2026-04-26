#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
	int n;
	int ans = 5000;
	vector <int> team;
	int data[25][25];
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		if(i <= n/2)
		{
			team.push_back(0);
		}
		else
		{
			team.push_back(1);
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	
	do
	{
		int teamA[10];
		int teamB[10];
		int index = 0;
		int index2 = 0;
		int sumA = 0;
		int sumB = 0;
		int temp;
		
		for(int i=0; i<n; i++)
		{
			if(team[i] == 0)
			{
				teamA[index] = i+1;
				index++;
			}
			else
			{
				teamB[index2] = i+1;
				index2++;
			}
		}
		
		for(int i=0; i<n/2; i++)
		{
			for(int j=i+1; j<n/2; j++)
			{
				if(i == j)
				{
					continue;
				}
				sumA += data[teamA[i]][teamA[j]] + data[teamA[j]][teamA[i]];
				sumB += data[teamB[i]][teamB[j]] + data[teamB[j]][teamB[i]];
			}
		}
		
		temp = abs(sumB - sumA);
		if(temp < ans)
		{
			ans = temp;
		}
	}while(next_permutation(team.begin(),team.end()));
	printf("%d\n",ans);
}
	