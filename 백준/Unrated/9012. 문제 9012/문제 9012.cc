#include <stdio.h>
#include <string.h>
int main(void)
{
	int T;
	char stack[105];
	scanf("%d",&T);
	while(T--)
	{
		int top=0,flag=0;
		char data[105];
		scanf("%s",data);
		for(int i=0; i<strlen(data); i++)
		{
		    if(data[i] == '(')
		    {
		    	 stack[top++] = data[i];
		    }
		    else if(data[i] == ')' && top != 0)
		    {
			    stack[top--] = NULL;
		    }
		    else if(data[i] == ')' && top == 0)
		    {
		    	 flag=1;
   	    }
		 }
		 if(top != 0)
		 {
		 	flag = 1;
		 }
		 if(flag == 1)
		 {
		 	printf("NO\n");
		 }
		 else if(flag == 0)
		 {
		 	printf("YES\n");
		 }
	}
}