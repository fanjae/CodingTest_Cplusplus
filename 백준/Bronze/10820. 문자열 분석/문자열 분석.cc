/* 소문자 대문자 숫자 공백 순으로 출력 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	 char data[105];
	 while(gets(data) != NULL)
	 {
	 	int count_lower = 0;
	 	int count_upper = 0;
	 	int count_number = 0;
	 	int count_null = 0;
	 	
	 	for(int i=0; i<strlen(data); i++)
	 	{
	 		if(islower(data[i]))
	 		{
	 			count_lower++;
	 		}
	 		else if(isupper(data[i]))
	 		{
	 			count_upper++;
	 		}
	 		else if(data[i] == ' ')
	 		{
	 			count_null++;
	 		}
	 		else if(data[i] >= '0' && data[i] <= '9')
	 		{
	 			count_number++;
	 		}
	 	}
	 	
	 	printf("%d %d %d %d\n",count_lower,count_upper,count_number,count_null);
	 }
}