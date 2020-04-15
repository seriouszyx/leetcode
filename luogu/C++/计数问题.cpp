#include <iostream>

using namespace std;

const int N = 15;
int mark[N];

int main()
{
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		int t = i;
		while(t)
		{
			mark[t % 10] ++;
			t /= 10;
		}
	}
	
	cout << mark[x] << endl;
	
	return 0;
}