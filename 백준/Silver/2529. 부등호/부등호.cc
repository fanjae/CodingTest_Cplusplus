#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdbool.h>
#include <string>
#include <vector>

using namespace std;
bool visited[10];
vector <string> str_data;
char temp[50];
char data[50];
int n;

void back(int char_index, int start, int value)
{
	if(start == 2*n)
	{
		temp[char_index] = 0;
		str_data.push_back(temp);
		return ;		
	}
	else
	{
		for(int i=0; i<=9; i++)
		{
			if(data[start] == '<' && value < i && visited[i] == false)
			{
				temp[char_index] = i + '0';
				visited[i] = true;
				back(char_index+1,start+2,i);
				visited[i] = false;	
			}
			else if(data[start] == '>' && value > i && visited[i] == false)
			{
				temp[char_index] = i + '0';
				visited[i] = true;
				back(char_index+1,start+2,i);
				visited[i] = false;	
			}
		}
	}
}
int main(void)
{
	scanf("%d",&n);
	getchar();
	int index = 0;
	for(int i=0; i<2*n; i++)
	{
		scanf("%c",&data[i]);	
	}
	for(int i=0; i<=9; i++)
	{
		temp[index] = i + '0';
		visited[i] = true;
		for(int j=0; j<=9; j++)
		{
			if(data[0] == '<' && i < j && visited[j] == false)
			{
				temp[index+1] = j + '0';
				visited[j] = true;
				back(2,0+2,j);
				visited[j] = false;
			}
			else if(data[0] == '>' && i > j && visited[j] == false)
			{
				temp[index+1] = j + '0';
				visited[j] = true;
				back(2,0+2,j);
				visited[j] = false;
			}
		}
		visited[i] = false;
	}
	
	sort(str_data.begin(),str_data.end());
	cout << str_data[str_data.size()-1] << endl;
	cout << str_data[0] << endl;
}