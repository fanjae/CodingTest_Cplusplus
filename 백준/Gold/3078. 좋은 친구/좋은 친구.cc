#include <iostream>
#include <string>
#include <queue>

using namespace std;
queue <int> que[25];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n,m;
	long long int ans = 0;
	//freopen("in5.txt","r",stdin);
	cin >> n >> m;
	for(int i=1; i<=n; i++)
	{
		string str_temp;
		int str_size;
		
		cin >> str_temp;
		
		str_size = str_temp.size();
		
		while(que[str_size].empty() == false && i - que[str_size].front() > m)
		{
			que[str_size].pop();
		}
		ans += que[str_size].size();
		que[str_size].push(i);
	}
	cout << ans << '\n';
}