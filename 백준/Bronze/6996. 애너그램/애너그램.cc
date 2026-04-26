#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char a_str[1005];
		char b_str[1005];
		int a[30]={0};
		int b[30]={0};
		int cnt = 0;	
		scanf("%s %s",a_str,b_str);
		
		int a_len = strlen(a_str);
		int b_len = strlen(b_str);	
		
		for(int i=0; i<a_len; i++)
		{
			a[a_str[i]-'a']++;
		}
		for(int i=0; i<b_len; i++)
		{
			b[b_str[i]-'a']++;
		}	
		
		for(int i=0; i<26; i++)
		{
			cnt += abs(a[i] - b[i]);
		}
		
		if(cnt == 0)
		{
			printf("%s & %s are anagrams.\n",a_str,b_str);
		}
		else
		{
			printf("%s & %s are NOT anagrams.\n",a_str,b_str);
		}
	}
}