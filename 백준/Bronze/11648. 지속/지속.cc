#include <stdio.h>
#include <math.h>
char data[15];
int continue_good(int n)
{
	int cnt = 0;
	int temp = n;
	char data[15];
	
	int value = floor(log10(temp)+1);
	while(value > 1)
	{
		sprintf(data,"%d",temp); 
		int temp_cal = 1;
		int up = 1;
		for(int i=value-1; i>=0; i--)
		{
			temp_cal *= (data[i]-'0') * 1;
			up *= 10;
		}
		temp = temp_cal;
		value = floor(log10(temp)+1);
		cnt++;
	}
	return cnt;
		
			
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",continue_good(n));
}