#include <stdio.h>
#include <string.h>
int main()
{
	char del[10]="CAMBRIDGE";
	char word[105];
	scanf("%s",word);
	for(int i=0; i<strlen(word); i++)
	{
		int yet = 0;
		for(int j=0; j<strlen(del); j++)
		{
			if(word[i] == del[j])
			{
				yet = 1;
				break;
			}
		}
		if(yet == 0)
		{
			printf("%c",word[i]);
		}
	}
}