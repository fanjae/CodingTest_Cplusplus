#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(void)
{
	char data[5005];
	int count = 0;
	bool is_first = true;
	gets(data);
	int len = strlen(data);
	for(int i=0; i<len; i++)
	{
		if(is_first == true && data[i] == 'c' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}
		else if(is_first == true && data[i] == 'j' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}		
		else if(is_first == true && data[i] == 'n' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}	
		else if(is_first == true && data[i] == 'm' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}	
		else if(is_first == true && data[i] == 't' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}	
		else if(is_first == true && data[i] == 's' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}
		else if(is_first == true && data[i] == 'l' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}	
		else if(is_first == true && data[i] == 'd' && data[i+1] == 0x27 && (data[i+2] == 'a' || data[i+2] == 'e' || data[i+2] == 'i' || data[i+2] == 'o' || data[i+2] =='u' || data[i+2]== 'h'))
		{
			count++;
			i+=1;
			is_first = true;
			continue;
		}
		else if(is_first == true && data[i] == 'q' && data[i+1] == 'u' && data[i+2] == 0x27 && (data[i+3] == 'a' || data[i+3] == 'e' || data[i+3] == 'i' || data[i+3] == 'o' || data[i+3] =='u' || data[i+3]== 'h'))
		{
			count++;
			i+=2;
			is_first = true;
			continue;
		}	
		else if(data[i] == '-')
		{
			is_first = true;
			count++;
			continue;
		}
		else if(data[i] == ' ')
		{
			is_first = true;
			count++;
			continue;
		}
		if(i + 1 == len)
		{
			count++;	
		}
		is_first = false;
	}
	printf("%d",count);
}