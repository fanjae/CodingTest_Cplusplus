#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> per;
vector <char> alpha;
char data[35];
int main(void)
{
	int l,c;
	scanf("%d %d",&l,&c);
	for(int i=0; i<c*2; i++)
	{
		scanf("%c",&data[i]);
	}
	for(int i=0; i<c*2; i++)
	{
		if(data[i] >= 'a' && data[i] <= 'z')
		{
			alpha.push_back(data[i]);
		}
	}
	sort(alpha.begin(),alpha.end());
	for(int i=0; i<c; i++)
	{
		if(i < l)
		{
			per.push_back(0);
		}
		else
		{
			per.push_back(1);
		}
	}
	
	do
	{
		int vowel_count = 0;
		int not_vowel = 0;
		for(int i=0; i<c; i++)
		{
			if(per[i] == 0)
			{
				if(alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' || alpha[i] == 'o' || alpha[i] == 'u')
				{
					vowel_count++;
				}
				else
				{
					not_vowel++;
				}
			}
		}
		if(vowel_count >= 1 && not_vowel >= 2)
		{
			for(int i=0; i<c; i++)
			{
				if(per[i] == 0)
				{
					printf("%c",alpha[i]);
				}
			}		
			printf("\n");
		}
	}while(next_permutation(per.begin(),per.end()));
}