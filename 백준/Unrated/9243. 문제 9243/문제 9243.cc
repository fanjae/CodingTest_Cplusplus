#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	char a[1005];
	char b[1005];
	scanf("%d",&n);
	scanf("%s",a);
	scanf("%s",b);
	if(n % 2 == 0)
	{
		if(!strcmp(a,b))
		{
			printf("Deletion succeeded\n");
		}
		else
		{
			printf("Deletion failed\n");
		}
	}
	else
	{	

		for(int i=0; i<strlen(a); i++)
		{
         if(a[i] == '1')
			{
				a[i] = 48;
			}
			else if(a[i] == '0')
			{
				a[i] = 49;
			}
	   }
		if(!strcmp(a,b))
		{
			printf("Deletion succeeded\n");
		}
		else
		{
			printf("Deletion failed\n");
		}
	}
			
}
	

