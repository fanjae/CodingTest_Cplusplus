#include <stdio.h>
#include <string.h>
int T;
int garo,sero,n;
int dirx,diry;
int count;
int data[50][50];
bool safe(int a, int b)
{
    return (0 <= a && a < garo) && (0 <= b && b < sero);
}
void dfs(int a, int b,int c)
{
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    data[a][b] = c;
    for(int i=0; i<4; i++)
    {
        if(safe(a+dx[i],b+dy[i]) && data[a+dx[i]][b+dy[i]]==1)
        {
            dfs(a+dx[i],b+dy[i],c);
        }
     }
}
int main(void)
{
    scanf("%d",&T);
    while(T--)
    {
        memset(data,0,sizeof(data));
        count = 0;
        scanf("%d %d %d",&garo,&sero,&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&dirx,&diry);
            data[dirx][diry]=1;
        }
        for(int i=0; i<garo; i++)
        {
            for(int j=0; j<sero; j++)
            {
                if(data[i][j]==1)
                {
                    count++;
                    dfs(i,j,0);
                }
            }
        }
        printf("%d\n",count);
    }
}