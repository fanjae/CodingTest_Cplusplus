#include <vector>
#include <stdio.h>
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;
	vector<int>::iterator iter;
	for(iter = a.begin(); iter != a.end(); iter++) {
		ans += *iter;
	}
	return ans;
}