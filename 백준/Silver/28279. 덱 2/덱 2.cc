#include <iostream>
#include <deque>
using namespace std;
deque <int> deq;

void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main(void)
{
	init();

	int n;
	cin >> n;
	while (n--)
	{
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			int temp_value;
			cin >> temp_value;
			deq.push_front(temp_value);
		}
		else if (temp == 2)
		{
			int temp_value;
			cin >> temp_value;
			deq.push_back(temp_value);
		}
		else if (temp == 3)
		{
			if (deq.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << deq.front() << "\n";
				deq.pop_front();
			}
		}
		else if (temp == 4)
		{
			if (deq.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << deq.back() << "\n";
				deq.pop_back();
			}
		}
		else if (temp == 5)
		{
			cout << deq.size() << "\n";
		}
		else if (temp == 6)
		{
			cout << deq.empty() << "\n";
		}
		else if(temp == 7)
		{
			if (deq.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << deq.front() << "\n";
			}
		}
		else if (temp == 8)
		{
			if (deq.empty())
			{
				cout << "-1\n";
			}
			else
			{
				cout << deq.back() << "\n";
			}
		}
	}
}