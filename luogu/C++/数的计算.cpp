#include <iostream>

using namespace std;

const int N = 1005;
int f[N];

int main()
{
	int n;
	cin >> n;
	f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		f[i] = f[i - 1];
		if (i % 2 == 0) f[i] += f[i / 2];
	}
	
	cout << f[n] << endl;
	
	return 0;
}