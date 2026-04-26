#include <stdio.h>  
#include <stdlib.h>  
int main()  
{  
    int n,a[2000][6]={0},i,j,max[2000]={0},max2=0,su=0;  
    int cnt[2000]={0},find1[2000]={0},find2[2000]={0};  
    int count[2000][10]={0};  
      
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=4;j++)  
        {  
            scanf("%d",&a[i][j]);  
        }  
    }  
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=4;j++)  
        {  
            if(a[i][j] > max[i])  
            {  
                max[i] = a[i][j];  
            }  
            if(a[i][j]==1)  
            {  
                count[i][1]++;  
                if(count[i][1] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 1;  
                    }  
                    else  
                    {  
                        find2[i] = 1;  
                    }  
                }  
            }  
            else if(a[i][j]==2)  
            {  
                count[i][2]++;  
                if(count[i][2] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 2;  
                    }  
                    else  
                    {  
                        find2[i] = 2;  
                    }  
  
                }  
            }  
            else if(a[i][j]==3)  
            {  
                count[i][3]++;  
                if(count[i][3] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 3;  
                    }  
                    else  
                    {  
                        find2[i] = 3;  
                    }  
                }  
            }  
            else if(a[i][j]==4)  
            {  
                count[i][4]++;  
                if(count[i][4] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 4;  
                    }  
                    else  
                    {  
                        find2[i] = 4;  
                    }  
                }  
            }  
            else if(a[i][j]==5)  
            {  
                count[i][5]++;  
                if(count[i][5] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 5;  
                    }  
                    else  
                    {  
                        find2[i] = 5;  
                    }  
                }  
            }  
            else if(a[i][j]==6)  
            {  
                count[i][6]++;  
                if(count[i][6] == 2)  
                {  
                    cnt[i]++;  
                    if(find1[i]==0)  
                    {  
                        find1[i] = 6;  
                    }  
                    else  
                    {  
                        find2[i] = 6;  
                    }  
                }  
            }  
        }  
    }  
      
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=6;j++)  
        {  
            if(count[i][j]==4)  
            {  
                su=50000+j*5000;  
            }  
            else if(count[i][j]==3)  
            {  
                su=10000+j*1000;  
            }  
            else if(cnt[i]==2)  
            {  
                su = 2000+find1[i]*500+find2[i]*500;  
            }  
            else if(count[i][j]==2)  
            {  
                su=1000+j*100;  
            }  
            else  
            {  
                su=max[i]*100;     
            }  
            if (max2 < su)  
            {  
                max2 = su;  
            }  
        }  
    }  
    printf("%d",max2);  
}