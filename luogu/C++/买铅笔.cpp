#include <iostream>
#include <algorithm>

using namespace std;

int n;
int m1, m2, m3, v1, v2, v3;

int cal(int m, int v)
{
	int ans = 0;
	ans += ((n / m) * v);
	if (n % m != 0) ans += v;
	return ans;
}

int main()
{
	
	cin >> n;
	cin >> m1 >> v1;
	cin >> m2 >> v2;
	cin >> m3 >> v3;
	int a1 = cal(m1, v1);
	int a2 = cal(m2, v2);
	int a3 = cal(m3, v3);
	int res = 0;
	res = min(a1, a2);
	res = min(res, a3);
	cout << res << endl;
	return 0;
}