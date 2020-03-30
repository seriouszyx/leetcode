#include <iostream>

using namespace std;

const int N = 10;

int s[N], m[N];

int main()
{
	for (int i = 1; i <= 7; i++) cin >> s[i] >> m[i];
	int maxv = 0, res = 0;
	for (int i = 1; i <= 7; i++)
	{
		int cnt = s[i] + m[i];
		if (cnt - 8 > maxv) res = i, maxv = cnt - 8;
	}
	
	cout << res << endl;
	
	return 0;
}