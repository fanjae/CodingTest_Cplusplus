#include<stdio.h>
#include<string.h>
#define INF 10000000;
int n;
int maps1[1010][1010],maps2[1010][1010];
int dis1[1010],dis2[1010];
void daik(int maps[][1010],int *dis)
{
    int i,j,p,mi,visit[1010];
    memset(visit,0,sizeof visit);
    for(i=1; i<=n; i++)
    {
        mi=INF;
        p=-1;
        for(j=1; j<=n; j++)
            if(!visit[j]&&dis[j]<=mi)
                mi=dis[j],p=j;
        if(p==-1)
            return ;
        visit[p]=1;
        for(j=1; j<=n; j++)
            if(!visit[j]&&dis[p]+maps[p][j]<dis[j])
                dis[j]=dis[p]+maps[p][j];
    }
}
int main()
{
    int m,x,i,j,a,b,t,ma;
    scanf("%d%d%d",&n,&m,&x);
    for(i=1; i<=n; i++)
    {
        dis1[i]=dis2[i]=INF;
        for(j=1; j<=n; j++)
        {
            if(i==j)
                maps1[i][j]=maps2[i][j]=0;
            else
                maps1[i][j]=maps2[i][j]=INF;
        }
    }
    for(i=1; i<=m; i++)
    {
        scanf("%d%d%d",&a,&b,&t);
        if(t<maps1[a][b])
            maps1[a][b]=maps2[b][a]=t;
    }
    dis1[x]=dis2[x]=0;
    daik(maps1,dis1);
    daik(maps2,dis2);
    ma=-1;
    for(i=1; i<=n; i++)
    {
        if(dis1[i]+dis2[i]>ma)
            ma=dis1[i]+dis2[i];
    }
    printf("%d\n",ma);
    return 0;
}