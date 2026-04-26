#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <stdbool.h>

using namespace std;
int sudoku[10][10];
bool ans_show = false;
bool promising(int x, int y, int value)
{
	bool visited[10]={0};
	for(int i=0; i<9; i++)
	{
		if(sudoku[x][i] == value || sudoku[i][y] == value)
		{
			return false;
		}
	}
	
	int new_x = x / 3;
	int new_y = y / 3;
	
	for(int i = new_x *3; i <= new_x*3+2; i++)
	{
		for(int j = new_y *3; j<= new_y*3+2; j++)
		{
			if(sudoku[i][j] == value)
			{
				return false;
			}
		}
	}
	return true;
}
void show(int x, int y)
{
	if(sudoku[x][y] == 0)
	{
		for(int i=1; i<=9; i++)
		{
			if(promising(x,y,i) == true)
			{
				sudoku[x][y] = i;
				show(x,y);
				sudoku[x][y] = 0;
			}
		}	
	}
	else
	{
		if(x == 8 && y == 8)
		{
			for(int i=0; i<9; i++)
			{
				for(int j=0; j<9; j++)
				{
					printf("%d ",sudoku[i][j]);
				}
				printf("\n");
			}
			exit(0);
		}
		else if(y == 8)
		{
			return show(x+1,0);
		}
		else
		{
			return show(x,y+1);
		}
	}

}
int main(void)
{
	int start_x, start_y;
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			scanf("%d",&sudoku[i][j]);
		}
	}
	show(0,0);
}