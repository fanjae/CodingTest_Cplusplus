#include <stdio.h>
long long int n,count;
long long int col[30],inc[30],dec[30];
 
void solution(long long int r)
{
    int i;
    if(r>n)
    {
        count++;
        return ;
    }
    for(i=1; i<=n; i++)
    {
        if(!col[i] && !inc[r+i] && !dec[n+(r-i)+1])
        {
            col[i]=inc[r+i]=dec[n+(r-i)+1]=1;
            solution(r+1);
            col[i]=inc[r+i]=dec[n+(r-i)+1]=0;
        }
    }
}
int main()
{
    scanf("%lld",&n);
    solution(1);
    printf("%lld",count);
}