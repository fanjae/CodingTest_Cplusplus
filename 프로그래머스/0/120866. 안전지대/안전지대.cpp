#include <string>
#include <vector>

using namespace std;

int direction[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
int safe(int x, int y, int n)
{
    if(x < 0 || x >=n)
    {
        return false;
    }
    if(y < 0 || y >= n)
    {
        return false;
    }
    return true;
}
int solution(vector<vector<int>> board) 
{
    int answer = 0;
    int n = board.size();
    
    bool danger_board[105][105]={0};
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(board[i][j] == 1)
            {
                danger_board[i][j] = true;
                for(int k=0; k<8; k++)
                {
                    int x = i + direction[k][0];
                    int y = j + direction[k][1];

                    if(safe(x,y,n) == true)
                    {
                        danger_board[x][y] = true;
                    }
                }
            }
        }
    }

    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(danger_board[i][j] == 0)
            {
                answer++;
            }
        }
    }
    
    return answer;
}