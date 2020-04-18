#include <iostream>

using namespace std;

const int MOD = 100003, N = 1e5 + 10;

int dp[N];

int main()
{
	int n, k;
	cin >> n >> k;
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= k; j++)
			if (i >= j) dp[i] = (dp[i] + dp[i - j]) % MOD;
	
	cout << dp[n] << endl;
	
	return 0;
}