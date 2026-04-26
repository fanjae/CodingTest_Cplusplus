#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct data
{
	string str_data;
	int value;
};

bool compare(struct data &dat1, struct data &dat2)
{
	return dat1.value < dat2.value;
}
int main(void)
{
	int n;
	data dat[10];
	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		string temp;
		int value;
		cin >> temp;
		cin >> value;
		
		dat[i].str_data = temp;
		dat[i].value = value;
	}
	sort(dat,dat+n,compare);
	cout << dat[0].str_data << "\n";
}