#include <iostream>

using namespace std;

const int N = 1010;

int n, m, k;

int record[N][N];

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			record[x - 1][j] = 1;
		}
	
	for (int i = 0; i < k; i++)
	{
		int ans = 0;
		for (int j = 0; j < m; j++)
			if (record[i][j]) ans++;
		cout << ans << ' ';
	}
	
}