#include <stdio.h>
int main()
{
	int L,P;
	int data[30];
	scanf("%d %d",&L,&P);
	for(int i=0; i<5; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<5; i++)
	{
		printf("%d ",data[i]-L*P);
   }
}