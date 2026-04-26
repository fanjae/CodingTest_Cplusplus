#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
	int n;
	vector <int> data;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		data.push_back(i);
	}
	
	do
	{
		for(int i=0; i<n; i++)
		{
			printf("%d ",data[i]);
		}
		printf("\n");
	}
	while(next_permutation(data.begin(),data.end()));
}