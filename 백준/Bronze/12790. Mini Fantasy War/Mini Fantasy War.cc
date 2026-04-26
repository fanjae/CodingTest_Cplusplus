#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int hp,mp,attack,defense;
		int h,m,a,d;
		scanf("%d %d %d %d",&hp,&mp,&attack,&defense);
		scanf("%d %d %d %d",&h,&m,&a,&d);
		hp += h;
		mp += m;
		attack += a;
		defense += d;
		if(hp < 1)
		{
			hp = 1;
		}
		if(mp < 1)
		{
			mp = 1;
		}
		if(attack < 0)
		{
			attack = 0;
		}
		printf("%d\n",1*hp+5*mp+2*attack+2*defense);
	}
}