#include <stdio.h>
#include <algorithm>
using namespace std;
struct data
{
	int b;
	int p;
	int q;
	int r;
	int score;
	int score2;
	
};

bool compare(const struct data dat1, const struct data dat2)
{
	if(dat1.score == dat2.score)
	{
		if(dat1.score2 == dat2.score2)
		{
			return dat1.b < dat2.b;
		}
		return dat1.score2 < dat2.score2;
	}
	return dat1.score < dat2.score;
}

int main(void)
{
	int n;
	data dat[105];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d",&dat[i].b,&dat[i].p,&dat[i].q,&dat[i].r);
		dat[i].score = (dat[i].p * dat[i].q * dat[i].r);
		dat[i].score2 = (dat[i].p + dat[i].q + dat[i].r);
	}
	
	sort(dat,dat+n,compare);
	for(int i=0; i<3; i++)
	{
		printf("%d ",dat[i].b);
	}
		
}