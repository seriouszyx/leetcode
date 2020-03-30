#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 10;
int g[N][N], mark[N][N];

int n, m;

int res, ans;

int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y)
{
	if (x == n)
	{
		res = max(res, ans);
		return;
	}
	if (y == m) 
	{
		dfs(x + 1, 0);
		return;
	}
	
	dfs(x, y + 1);
	
	if (!mark[x][y])
	{
		ans += g[x][y];
		for (int i = 0; i < 8; i++)
			if (x + dx[i] >= 0 && x + dx[i] < n && y + dy[i] >= 0 && y + dy[i] < m)
				mark[x + dx[i]][y + dy[i]]++;
		mark[x][y]++;
		dfs(x, y + 1);
		ans -= g[x][y];
		for (int i = 0; i < 8; i++)
			if (x + dx[i] >= 0 && x + dx[i] < n && y + dy[i] >= 0 && y + dy[i] < m)
				mark[x + dx[i]][y + dy[i]]--;
		mark[x][y]--;
	} 
}

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		memset(g, 0, sizeof(g));
		memset(mark, 0, sizeof(mark));
		cin >> n >> m;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> g[i][j];
		res = 0, ans = 0;
		dfs(0, 0);
		cout << res << endl;
	}
	return 0;
}