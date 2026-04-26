#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int n,a[2000][5],i,j,sum[5]={0,0,0,0,0},max=0;  
    int count3[5]={0,0,0,0,0},count2[5]={0,0,0,0,0},rank[5]={1,1,1,1,1};  
       
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=3;j++)  
        {  
            scanf("%d",&a[i][j]);  
            sum[j] = sum[j] + a[i][j];  
        }  
    }  
       
    for(i=1;i<=3;i++)  
    {   
        if(max < sum[i])  
        {  
            max = sum[i];  
        }  
    }  
            
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=3;j++)  
        {  
             if(a[i][j] == 3)  
             {  
                    count3[j]++;  
             }  
             else if(a[i][j] == 2)  
             {  
                    count2[j]++;  
             }  
        }  
    }  
       
    for(i=1;i<=3;i++)  
    {  
        for(j=1;j<=3;j++)  
        {  
            if(sum[i] > sum[j])  
            {  
                rank[j]++;  
            }  
            else if(sum[i] < sum[j])  
            {  
                rank[i]++;  
            }  
            else 
            {  
                if(count3[i] > count3[j])  
                {  
                    rank[j]++;  
                }  
                else if(count3[i] < count3[j])  
                {  
                    rank[i]++;  
                }  
                else 
                {  
                    if(count2[i] > count2[j])  
                    {  
                        rank[j]++;  
                    }  
                    else if(count2[i] < count2[j])  
                    {  
                        rank[i]++;  
                    }  
                }  
            }  
        }  
    }  
       
    if(rank[1]==1 && rank[2]!=1 && rank[3]!=1)  
    {  
        printf("%d %d",1,max);  
    }  
    else if(rank[1]!=1 && rank[2]==1 && rank[3]!=1)  
    {  
        printf("%d %d",2,max);  
    }  
    else if(rank[1]!=1 && rank[2]!=1 && rank[3]==1)  
    {  
        printf("%d %d",3,max);  
    }  
    else 
    {  
        printf("%d %d",0,max);  
    }  
} 