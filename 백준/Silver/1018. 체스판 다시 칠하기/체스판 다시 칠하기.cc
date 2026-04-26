#include <stdio.h>
#include <algorithm>
using namespace std;
char Whitefirst[8][9]={
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW"};
char Blackfirst[8][9]=
{"BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB",
 "BWBWBWBW",
 "WBWBWBWB"};
char data[55][55];
int ans=100;
int n,m;
int Whiteanswer(int x,int y);
int Blackanswer(int x,int y);
int main(void)
{
	scanf("%d %d\n",&n,&m);
	for(int i=0; i<n; i++)
	{
		gets(data[i]);
	}
	for(int i=0; i<n-7; i++)
	{
		for(int j=0; j<m-7; j++)
		{
			ans = min(ans,min(Whiteanswer(i,j),Blackanswer(i,j)));
		}
	}
	printf("%d\n",ans);
}
int Whiteanswer(int x, int y)
{
	int count = 0;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			if(data[i+x][j+y] != Whitefirst[i][j])
			{
				count++;
			}
		}
	}
	return count;
}
int Blackanswer(int x, int y)
{
	int count = 0;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			if(data[i+x][j+y] != Blackfirst[i][j])
			{
				count++;
			}
		}
	}
	return count;
}
	

 