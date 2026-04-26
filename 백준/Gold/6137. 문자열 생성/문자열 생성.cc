#include <stdio.h>
int main(void)
{
	char data[5005];
	int n;
	int list_len = 0;
	int print = 0;
	int start, end;
	scanf("%d",&n);
	getchar();
	for(int i=0; i<n; i++)
	{
		scanf("%c",&data[i]);
		getchar();
	}
	start = 0;
	end = n - 1;
	
	while(start <= end)
	{
		bool left = false;
		for(int i=0; i+start <= end; i++)
		{
			if(data[i+start] < data[end-i])
			{
				left = true;
				break;
			}
			else if(data[i+start] > data[end-i])
			{
				left = false;
				break;
			}		
		}
		if(left)
		{
			printf("%c",data[start]);
			start++;
		}
		else
		{
			printf("%c",data[end]);
			end--;
		}
		
		print++;
		
		if(print == 80)
		{
			print = 0;
			printf("\n");
		}	
	}
	if(print != 0)
	{
		printf("\n");
	}

}