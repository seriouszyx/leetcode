#include <iostream>

using namespace std;

const int N1 = 210, N2 = 10;

int dp[N1][N2];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) dp[i][1] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 2; j <= k; j++)
			if (i > j) dp[i][j] = dp[i - 1][j - 1] + dp[i - j][j];
			else dp[i][j] = dp[i - 1][j - 1];
	
	cout << dp[n][k] << endl;
	
	return 0;
}