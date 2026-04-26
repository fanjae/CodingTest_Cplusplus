#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[505]={0};
		int P,M;
		int A;
		int cnt=0;
		scanf("%d %d",&P,&M);
		for(int i=0; i<M; i++)
		{
			data[i]++;
		}
		for(int i=0; i<P; i++)
		{
			scanf("%d",&A);
			if(data[A-1] > 0)
			{
				data[A-1] = -1;
			}
		}
		for(int i=0; i<M; i++)
		{
			if(data[i] == -1)
			{
				cnt++;
			}
		}
		printf("%d\n",P-cnt);
	}
}