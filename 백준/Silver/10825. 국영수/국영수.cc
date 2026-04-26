#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct data
{
	string name;
	int kor;
	int eng;
	int mat;
};

bool compare(const data &p1,const data &p2)
{
	if(p1.kor == p2.kor)
	{
		if(p1.eng == p2.eng)
		{
			if(p1.mat == p2.mat)
			{
				return p1.name < p2.name;
			}
			else
			{
				return p1.mat > p2.mat;
			}
		}
		else
		{
			return p1.eng < p2.eng;
		}
	}
	else
	{
		return p1.kor > p2.kor;
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	
	vector<data> real_dat(n);
	for(int i=0; i<n; i++)
	{
		cin >> real_dat[i].name >> real_dat[i].kor >> real_dat[i].eng >> real_dat[i].mat;
	}
	sort(real_dat.begin(),real_dat.end(),compare);
	for(int i=0; i<n; i++)
	{
		cout << real_dat[i].name << "\n";
	}
}