#include<stdio.h>  
main()  
{  
    int i,j,n;  
    int a[55],b[55],rank[55]={0};  
    scanf("%d",&n);  
    for(i=1;i<=n;i++)  
    {  
        scanf("%d %d",&a[i],&b[i]);  
        rank[i]=1;  
    }  
    for(i=1;i<=n-1;i++)  
    {  
        for(j=i+1;j<=n;j++)  
        {  
            if(a[i] > a[j] && b[i] > b[j])  
            {  
                rank[j]++;  
            }  
            else if(a[i] < a[j] && b[i] < b[j])  
            {  
                rank[i]++;  
            }  
        }  
    }  
    for(i=1;i<=n;i++)  
    {  
        printf("%d ",rank[i]);  
    }  
}