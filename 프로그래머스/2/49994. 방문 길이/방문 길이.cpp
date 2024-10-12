#include <string>
using namespace std;

bool safe(int x, int y)
{
    if (x < 0 || y < 0 || x > 10 || y > 10)
    {
        return false;
    }
    return true;
}
int solution(string dirs) {

    int answer = 0;
    int start_x = 5;
    int start_y = 5;
    int dir_x[4] = { 1,0,-1,0 };
    int dir_y[4] = { 0,-1,0,1 };
    int type;
    bool visited[4][11][11] = { 0 };

    for (int i = 0; i < dirs.length(); i++)
    {
        if (dirs[i] == 'U')
        {
            type = 0;
        }
        else if (dirs[i] == 'L')
        {
            type = 1;
        }
        else if (dirs[i] == 'D')
        {
            type = 2;
        }
        else
        {
            type = 3;
        }

        int other_type = (type + 2) % 4;
        int go_x = start_x + dir_x[type];
        int go_y = start_y + dir_y[type];
        if (safe(go_x, go_y) == true && visited[type][start_x][start_y] == false && visited[other_type][go_x][go_y] == false)
        {
            visited[type][start_x][start_y] = true;
            visited[other_type][go_x][go_y] = true;
            answer++;
        }
        if (safe(go_x, go_y) == true)
        {
            start_x = go_x;
            start_y = go_y;
        }
    }
    return answer;
}