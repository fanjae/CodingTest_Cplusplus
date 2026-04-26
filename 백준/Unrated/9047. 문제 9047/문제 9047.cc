#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
bool cmp(char a,char b)
{
    return a>b?a:b;
}
int main()
{
	int temp;
    int T;
    scanf("%d",&T);
    while(T--)
    {
    	int count=0;
    	char data[10];
    	scanf("%s",data);
    	temp = atoi(data);
    	while(temp != 6174)
    	{
        	if(temp == 6174)
        	{
            	break;
        	}
        	if(temp < 1000)
        	{
        		temp *= 10;
        	}
        	sprintf(data,"%d",temp);
        	sort(data,data+4);
       		int min = atoi(data);
        	sort(data,data+4,cmp);
        	int max = atoi(data);
         
        	temp = max - min;
       	 	count++;
        }
        printf("%d\n",count);
    }
}