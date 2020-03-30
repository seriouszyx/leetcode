#include <iostream>
#include <vector> 
#include <cstdio>

using namespace std;

int n;
vector<int> path;

void dfs(int u, int state)
{
	if (u == n)
	{
		for (int i = 0; i < path.size(); i++) 
			printf("%5d", path[i]);
		cout << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!(state >> i & 1))
		{
			path.push_back(i + 1);
			dfs(u + 1, state | 1 << i);
			path.pop_back();
		}
	}
}

int main()
{
	cin >> n;
	
	dfs(0, 0);
	
	return 0;
}