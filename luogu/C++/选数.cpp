#include <iostream>

using namespace std;

const int N = 30;

int n, k, res = 0;

int g[N];

bool isPrime(int num)
{
	for (int i = 2; i * i <= num; i++)
		if (num % i == 0) return false;
	return true;
}

void dfs(int u, int sum, int state)
{
	if (sum == k)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++) 
			if (state >> i & 1) cnt += g[i];
		if (isPrime(cnt)) res++;				
		return;
	}
	if (sum + n - u < k || u == n) return;
	
	dfs(u + 1, sum + 1, state | 1 << u);
	dfs(u + 1, sum, state);
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> g[i];
	dfs(0, 0, 0);
	cout << res << endl;	
	return 0;
}