#include <stdio.h>
int data[3][3]={0};
int cal()
{
	int player[2]={0};

	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{	
			if(data[i][j] == 1)
			{
				player[0]++;
			}
			if(data[i][j] == 2)
			{
				player[1]++;
			}
		}
		if(player[0] == 3)
		{
			return 1;
		}
		else if(player[1] == 3)
		{
			return 2;
		}
		player[0] = player[1] = 0;
	}

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(data[j][i] == 1)
			{
				player[0]++;
			}
			if(data[j][i] == 2)
			{
				player[1]++;
			}
		}
		if(player[0] == 3)
		{
			return 1;
		}
		else if(player[1] == 3)
		{
			return 2;
		}
		player[0] = player[1] = 0;	
	}	

	for(int i=0; i<3; i++)
	{
		if(data[i][i] == 1)
		{
			player[0]++;
		}
		if(data[i][i] == 2)
		{
			player[1]++;
		}
	}
	if(player[0] == 3)
	{
		return 1;
	}
	else if(player[1] == 3)
	{
		return 2;
	}
	player[0] = player[1] = 0;
	
	for(int i=0; i<3; i++)
	{
		if(data[i][2-i] == 1)
		{
			player[0]++;
		}
		if(data[i][2-i] == 2)
		{
			player[1]++;
		}
	}
	if(player[0] == 3)
	{
		return 1;
	}
	else if(player[1] == 3)
	{
		return 2;
	}
	return 0;
}
int main(void)
{
	int n;
	bool turn = false;
	scanf("%d",&n);
	if(n == 1)
	{
		turn = true;
	}
	
	n = 1;
	while(n <= 9)
	{
		int x,y;
		int temp;
		scanf("%d %d",&x,&y);
		
		if(turn == false)
		{	
			data[x-1][y-1] = 2;
		}
		else if(turn == true)
		{
			data[x-1][y-1] = 1;
		}
		
		turn = !turn;
		
		if((temp = cal()) != 0)
		{
			printf("%d\n",temp);
			return 0;
		}
		n++;
	}
	printf("0\n");
}
	