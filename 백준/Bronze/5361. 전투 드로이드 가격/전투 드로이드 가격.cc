#include <stdio.h>
float table[5]={350.34,230.90,190.55,125.30,180.90};
int main(void)
{
	 int T;
	 scanf("%d",&T);
	 while(T--)
	 {
	 	int size[5];
	 	float sum=0;
	 	for(int i=0; i<5; i++)
	 	{
	 		scanf("%d",&size[i]);
	 	}
	 	for(int i=0; i<5; i++)
	 	{
	 		sum += table[i] * size[i];
	 	}
	 	printf("$%.2f\n",sum);
	 }
}