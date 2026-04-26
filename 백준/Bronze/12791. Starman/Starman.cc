#include <stdio.h>
struct album
{
	int year;
	char name[205];
};
int main()
{
	struct album data[25]={1967,"DavidBowie",1969,"SpaceOddity",1970,"TheManWhoSoldTheWorld",1971,"HunkyDory",1972,"TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars",1973,"AladdinSane",1973,"PinUps",1974,"DiamondDogs",1975,"YoungAmericans",1976,"StationToStation",1977,"Low",1977,"Heroes",1979,"Lodger",1980,"ScaryMonstersAndSuperCreeps",1983,"LetsDance",1984,"Tonight",1987,"NeverLetMeDown",1993,"BlackTieWhiteNoise",1995,"1.Outside",1997,"Earthling",1999,"Hours",2002,"Heathen",2003,"Reality",2013,"TheNextDay",2016,"BlackStar"};
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int s,e;
		int count=0;
		scanf("%d %d",&s,&e);
		for(int i=0; i<25; i++)
		{
			if(data[i].year >= s && data[i].year <= e)
			{
				count++;
			}
		}
		printf("%d\n",count);
		for(int i=0; i<25; i++)
		{
			if(data[i].year >= s && data[i].year <= e)
			{
				printf("%d %s\n",data[i].year,data[i].name);
			}
		}
	}
}