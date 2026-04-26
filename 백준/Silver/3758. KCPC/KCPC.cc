#include <stdio.h>
#include <string.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,k,t,m;
		int sum[105]={0};
		int problem[105][105]={0};
		int result[105]={0};
		int finallog[105]={0};
	   int rank[105];
		int ID,PRO,SCORE;
		scanf("%d %d %d %d",&n,&k,&t,&m);
		for(int i=0;i<=n;i++)
		{
			rank[i]=1;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d",&ID,&PRO,&SCORE);
			if(problem[ID][PRO] < SCORE)
			{
				sum[ID] -= problem[ID][PRO];
				problem[ID][PRO] = SCORE;
				sum[ID] += problem[ID][PRO];
			}
			result[ID]++;
			finallog[ID]=i+1;
		}
		for(int i=1;i<n;i++)
		{
		   for(int j=i+1; j<=n; j++)
			{
			    if(sum[i] > sum[j])
				 {
				    rank[j]++;
		       }
		       else if(sum[i] == sum[j])
		       {
      	  	    if(result[i] < result[j])
      	  	    {
      	  	    	 rank[j]++;
      	  	    }
      	  	    else if(result[i] == result[j])
      	  	    {
      	  	    	 if(finallog[i] < finallog[j])
      	  	    	 {
      	  	    	 	rank[j]++;
      	  	    	 }
      	  	    	 else if(finallog[i] > finallog[j])
      	  	    	 {
      	  	    	 	rank[i]++;
      	  	    	 }
      	  	    }
      	  	    else if(result[i] > result[j])
      	  	    {
      	  	    	rank[i]++;
      	  	    }
      	  	 }
      	  	 else if(sum[i] < sum[j])
      	  	 {
      	  	 	rank[i]++;
      	  	 }
     	  }
      }
		printf("%d\n",rank[t]);	
	}
	
}