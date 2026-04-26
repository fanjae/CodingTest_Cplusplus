#include <stdio.h>
int cal(int value)
{
	int sum = 0;
	while(value >= 1)
	{
		sum += value % 10;
		value /= 10;
	}
	return sum;
}
int twelve(int value)
{
	char data[10]={0};
	int su=0;
	int sum=0;
	while(value >= 1)
	{
		if(value % 12 == 10)
		{
			data[su++] = 'A';
		}
		else if(value % 12 == 11)
		{
			data[su++] = 'B';
		}
		else
		{
	     	data[su++] = (value % 12) + '0';
	    }
	    value /= 12;  
	}
	data[su] = 0;
	for(int i=0; i < su; i++)
	{
		if(data[i] == 'A')
		{
			sum += 10;
		}
		else if(data[i] == 'B')
		{
			sum += 11;
		}
		else
		{
			sum += (data[i] - '0');
		}
	}
	
	return sum;
}
int sixteen(int value)
{
	char data[10]={0};
	int su=0;
	int sum=0;
	while(value >= 1)
	{
		if(value % 16 == 10)
		{
			data[su++] = 'A';
		}
		else if(value % 16 == 11)
		{
			data[su++] = 'B';
		}
		else if(value % 16 == 12)
		{
			data[su++] = 'C';
		}
		else if(value % 16 == 13)
		{
			data[su++] = 'D';
		}
		else if(value % 16 == 14)
		{
			data[su++] = 'E';
		}
		else if(value % 16 == 15)
		{
			data[su++] = 'F';
		}
		else
		{
	     	data[su++] = (value % 16) + '0';
	    }
	    value /= 16;  
	}
	data[su] = 0;
	for(int i=0; i < su; i++)
	{
		if(data[i] == 'A')
		{
			sum += 10;
		}
		else if(data[i] == 'B')
		{
			sum += 11;
		}
		else if(data[i] == 'C')
		{
			sum += 12;
		}
		else if(data[i] == 'D')
		{
			sum += 13;
		}
		else if(data[i] == 'E')
		{
			sum += 14;
		}
		else if(data[i] == 'F')
		{
			sum += 15;
		}
		else
		{
			sum += (data[i] - '0');
		}
	}
	return sum;
}
int main(void)
{
	int n;
	for(int i=1000; i<=9999; i++)
	{
		int ten_sum = cal(i);
		int twelve_sum = twelve(i);
		int sixteen_sum = sixteen(i);
		if(ten_sum == twelve_sum && twelve_sum == sixteen_sum) 
		{
		 	printf("%d\n",i);
		}
	}
		
}