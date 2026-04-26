#include <stdio.h>
int n;
int data[15];
int op[4]={0};
int max = -1000000000;
int min = 1000000000;
void cal(int k, int sum)
{
	if(k == n-1)
	{
		if(sum > max)
		{
			max = sum;
		}
		if(sum < min)
		{
			min = sum;
		}
		return ;
	}
	for(int i=0; i<4; i++)
	{
		if(i == 0 && op[i] >= 1)
		{
			op[i]--;
			cal(k+1, sum + data[k+1]);
			op[i]++;	
		}
		if(i == 1 && op[i] >= 1)
		{
			op[i]--;
			cal(k+1, sum - data[k+1]);
			op[i]++;	
		}		
		if(i == 2 && op[i] >= 1)
		{
			op[i]--;
			cal(k+1, sum * data[k+1]);
			op[i]++;	
		}	
		if(i == 3 && op[i] >= 1)
		{
			op[i]--;
			cal(k+1, sum / data[k+1]);
			op[i]++;	
		}	
	}
}
int main(void)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<4; i++)
	{
		scanf("%d",&op[i]);
	}
	cal(0,data[0]);
	printf("%d\n%d",max,min);
}