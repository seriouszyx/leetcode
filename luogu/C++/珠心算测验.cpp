#include <iostream>
#include <algorithm>

using namespace std;

const int N = 150;

int g[N];

int main()
{
	int T, res = 0;
	cin >> T;
	for (int i = 0; i < T; i++) cin >> g[i];
	sort(g, g + T);
	for (int i = 2; i < T; i++)
	{
		bool success = false;
		for (int j = 0; j < i; j++)
			for (int k = j + 1; k < i; k++)
				if (g[j] + g[k] == g[i]) success = true;
		if (success) res++;
	}
	
	cout << res << endl;
		
	return 0;
}

