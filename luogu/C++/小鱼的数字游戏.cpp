#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int g[N];

int main()
{
	int start = 0;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		if (n == 0) 
		{
			start = i - 1;
			break;
		}
		g[i] = n;
	}
	for (int i = start; i >= 0; i--)
		cout << g[i] << ' ';
	cout << endl;
	
		
	return 0;
}

