#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d ",&T);
    while(T--)
    {
    	int count=0;
		int index=0;
        int start = 0;
        int end;    
        char data[1050];
        gets(data);
        for(int i=0; i<strlen(data); i++)
        {
            if(data[i] == ' ')
            {
                count++;
            }
            if(count == 2)
            {
            	index = i;
            	break;
            }
        }
        for(int i=index+1; i<strlen(data); i++)
        {
        	printf("%c",data[i]);
        }
        printf(" ");
        for(int i=0; i<index; i++)
        {
        	printf("%c",data[i]);
        }
        printf("\n");
    }
}