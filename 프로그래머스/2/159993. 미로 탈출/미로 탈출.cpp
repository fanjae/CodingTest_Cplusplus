#include <string>
#include <queue>
#include <vector>

using namespace std;
int dx[4]={0,0,-1,1};
int dy[4]={1,-1,0,0};
int n,m;
bool safe(int x, int y)
{
    if(x < 0 || x == n || y < 0 || y == m)
    {
        return false;
    }
    return true;
}
int solution(vector<string> maps) {
    int answer = -1;
    int visited[105][105];
    int L_move;
    bool L_find = false;
    int end_point_x;
    int end_point_y;
    queue <pair<int, int>> que;
    
    n = maps.size();
    m = maps[0].size();
    
    fill(&visited[0][0],&visited[0][0] + 105*105,105*105);
    for(int i=0; i<maps.size(); i++)
    {
        for(int j=0; j<maps[0].length(); j++)
        {
            if(maps[i][j] == 'S')
            {
                que.push({i,j});
                visited[i][j] = 0;
            }
        }
    }
     
    while(!que.empty())
    {
        int x = que.front().first;
        int y = que.front().second;
        
        que.pop();
        if(maps[x][y] == 'L')
        {
            end_point_x = x;
            end_point_y = y;
            L_move = visited[x][y];
            L_find = true;
            break;
        }
        for(int i=0; i<4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            
            if(safe(new_x,new_y) == true && visited[new_x][new_y] == 105*105 && maps[new_x][new_y] != 'X')
            {
                visited[new_x][new_y] = visited[x][y] + 1;
                que.push({new_x,new_y});
            }
        }
    }
    if(L_find == true)
    {
        fill(&visited[0][0],&visited[0][0] + 105*105,105*105);
        while(!que.empty())
        {
            que.pop();
        }

        visited[end_point_x][end_point_y] = L_move;
        que.push({end_point_x,end_point_y});
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;

            que.pop();
            if(maps[x][y] == 'E')
            {
                answer = visited[x][y];
                break;
            }
            for(int i=0; i<4; i++)
            {
                int new_x = x + dx[i];
                int new_y = y + dy[i];

                if(safe(new_x,new_y) == true && visited[new_x][new_y] == 105*105 && maps[new_x][new_y] != 'X')
                {
                    visited[new_x][new_y] = visited[x][y] + 1;
                    que.push({new_x,new_y});
                }
            }
        }
    }
      
    return answer;
}