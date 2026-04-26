#include <stdio.h>
#include <ctype.h>
char data[300];
int main(void)
{
	while(1)
	{
		int ans = 0;
		char upper_value,lower_value;
		fgets(data,300,stdin);
		if(data[0] == '#')
		{
			break;
		}
		
		upper_value = toupper(data[0]);
		lower_value = tolower(data[0]); 
		for(int i=2; ; i++)
		{
			if(data[i] == 0)
			{
				break;
			}
			else
			{
				if(upper_value == data[i] || lower_value == data[i])
				{
					ans++;
				}
			}
		}
		printf("%c %d\n",data[0],ans);
	}
}