#include <stdio.h>
#include <stdbool.h>

int n,m;
int arr[10];
bool visited[10]; // 이 숫자가 사용됬는가? 

void back(int k)
{
	if(k == m)
	{
		for(int i=0; i<m; i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		return ;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(visited[i] == false) // 방문 여부 확인. 
		{
			arr[k] = i;
			visited[i] = false; // 숫자 사용.  
			back(k+1); // 재귀 호출 
			// visited[i] = false; // 숫자 사용한 것을 회수한다. (재귀가 끝났으므로 이 값이 반환됬음.) 
		}
	}
}

int main(void)
{
	scanf("%d %d",&n,&m);
	back(0);
}