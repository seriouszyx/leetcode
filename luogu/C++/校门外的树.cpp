#include <iostream>

using namespace std;

const int N = 1e4 + 10;

int mark[N];

int main()
{
	int L, M, res = 0;
	cin >> L >> M;
	while(M--)
	{
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++)
			mark[i]++;
	}
	for (int i = 0; i <= L; i++)
		if (mark[i] == 0)
			res++;
	
	cout << res << endl;
		
	return 0;
}

