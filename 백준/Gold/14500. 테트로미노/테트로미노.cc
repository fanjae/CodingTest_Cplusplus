#include <stdio.h>
#include <stdbool.h>
int n,m;
int data[555][555];
int straight_x[2][4]={{0,0,0,0},{0,1,2,3}};
int straight_y[2][4]={{0,1,2,3},{0,0,0,0}};
int square_x[4]={0,0,1,1};
int square_y[4]={0,1,0,1};

int one_x[8][4]={{0,1,2,2},{0,0,0,1},{0,0,1,2},{0,1,1,1},{0,1,2,2},{0,1,1,1},{0,0,1,2},{0,0,0,1}};
int one_y[8][4]={{0,0,0,1},{0,1,2,0},{0,1,1,1},{0,0,-1,-2},{0,0,0,-1},{0,0,1,2},{0,1,0,0},{0,1,2,2}};

int two_x[4][4]={{0,1,1,2},{0,1,1,2},{0,0,1,1},{0,0,1,1}};
int two_y[4][4]={{0,0,1,1},{0,0,-1,-1},{0,-1,-1,-2},{0,1,1,2}};

int middle_x[4][4]={{0,1,1,1},{0,0,0,1},{0,1,2,1},{0,1,2,1}};
int middle_y[4][4]={{0,-1,0,1},{0,1,2,1},{0,0,0,-1},{0,0,0,1}};

int max = 0;
bool safe(int x, int y)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	if(y <= 0 || y > m)
	{
		return false;
	}
	return true;
}
void value_cal()
{
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			int count=0;
			int sum=0;
			for(int k=0; k<2; k++)
			{
				for(int l=0; l<4; l++)
				{
					int new_x = i + straight_x[k][l];
					int new_y = j + straight_y[k][l];
						
					if(safe(new_x,new_y) == true)
					{
						count++;
						sum += data[new_x][new_y];
					}
					if(count == 4)
					{
						if(max < sum)
						{
							max = sum;
						}
					}
				}
				count = 0;
				sum = 0;
			}
			count = 0;
			sum = 0;
			for(int k=0; k<4; k++)
			{
				int new_x = i + square_x[k];
				int new_y = j + square_y[k];
				
				if(safe(new_x,new_y) == true)
				{
					count++;
					sum += data[new_x][new_y];
				}
				
				if(count == 4)
				{
					if(max < sum)
					{
						max = sum;
					}
				}
			}
			sum = 0;
			count = 0;	
			for(int k=0; k<8; k++)
			{
				for(int l=0; l<4; l++)
				{
					int new_x = i + one_x[k][l];
					int new_y = j + one_y[k][l];
						
					if(safe(new_x,new_y) == true)
					{
						count++;
						sum += data[new_x][new_y];
					}
					
					if(count == 4)
					{
						if(max < sum)
						{
							max = sum;
						}
					}
				}
				sum = 0;
				count = 0;
			}	
			sum = 0;
			count = 0;			
			for(int k=0; k<4; k++)
			{
				for(int l=0; l<4; l++)
				{
					int new_x = i + two_x[k][l];
					int new_y = j + two_y[k][l];
						
					if(safe(new_x,new_y) == true)
					{
						count++;
						sum += data[new_x][new_y];
					}
					
					if(count == 4)
					{
						if(max < sum)
						{
							max = sum;
						}
					}
				}
				sum = 0;
				count = 0;
			}	
			sum = 0;
			count = 0;	
			for(int k=0; k<4; k++)
			{
				for(int l=0; l<4; l++)
				{
					int new_x = i + middle_x[k][l];
					int new_y = j + middle_y[k][l];
						
					if(safe(new_x,new_y) == true)
					{
						count++;
						sum += data[new_x][new_y];
					}
					
					if(count == 4)
					{
						if(max < sum)
						{
							max = sum;
						}
					}
				}
				sum = 0;
				count = 0;
			}
			sum = 0;
			count = 0;												
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	value_cal();
	printf("%d\n",max);
	
}
	