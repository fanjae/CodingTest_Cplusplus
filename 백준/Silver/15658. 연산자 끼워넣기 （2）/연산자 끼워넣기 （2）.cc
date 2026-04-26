#include <stdio.h>
int n;
int data[15];
int op_count[4];
int min = 1500000000;
int max = -1500000000;

void back(int count, int value)
{
	if(count == n)
	{
		if(max < value)
		{
			max = value;
		}
		if(min > value)
		{
			min = value;
		}
		return ;
	}	
	if(op_count[1] > 0)
	{
		op_count[1]--;
		if(count == 1)
		{
			back(count+1,data[count]+data[count+1]);	
		}
		else
		{	
			back(count+1,value+data[count+1]);
		}
		op_count[1]++;
	}
	if(op_count[2] > 0)
	{
		op_count[2]--;
		if(count == 1)
		{
			back(count+1,data[count]-data[count+1]);	
		}
		else
		{	
			back(count+1,value-data[count+1]);
		}
		op_count[2]++;
	}
	if(op_count[3] > 0)
	{
		op_count[3]--;
		if(count == 1)
		{
			back(count+1,data[count]*data[count+1]);	
		}
		else
		{	
			back(count+1,value*data[count+1]);
		}
		op_count[3]++;
	}
	if(op_count[4] > 0)
	{
		op_count[4]--;
		if(count == 1)
		{
			back(count+1,data[count]/data[count+1]);	
		}
		else
		{	
			back(count+1,value/data[count+1]);
		}
		op_count[4]++;
	}
	return ;
}
int main(void)
{
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i=1; i<=4; i++)
	{
		scanf("%d",&op_count[i]);
	}
	
	back(1,0);
	printf("%d\n%d\n",max,min);
}