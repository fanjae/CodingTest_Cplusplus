#include <stdio.h>
int d,t;
struct st 
{
    int m[50][50] = {};
    st operator*(st a)
	{
        st cal;
        for (int i=0; i<d; i++) 
        {
			for (int j=0; j<d; j++) 
			{
         	   for (int k=0; k<d; k++) 
				{
					cal.m[i][j] = (cal.m[i][j] + m[i][k] * a.m[k][j]) % 31991;
				}
        	}
        }
        return cal;
    }
}pow, result;
int main() 
{
    scanf("%d %d", &d, &t);
    for (int i=0; i<d; i++) 
	{
		result.m[i][i] = 1;
		pow.m[0][i] = 1;
	}
    for (int i=1; i<d; i++) 
	{
		pow.m[i][i-1] = 1;
	}
    while(t != 0)
    {
		if ((t & 1) == 1) 
		{
			result = result*pow;
		}
		t >>= 1;
		pow = pow*pow;
	}
    printf("%d", result.m[0][0]);
    return 0;
}