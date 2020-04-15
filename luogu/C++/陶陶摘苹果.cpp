#include <iostream>

using namespace std;

const int N = 15;
int h[N];

int main()
{
	for (int i = 0; i < 10; i++) cin >> h[i];
	int l;
	cin >> l;
	int res = 0;
	for (int i = 0; i < 10; i++) 
	{
		int temp = h[i];
		if (temp <= l) res++;
		else if (temp <= l + 30) res++;
	}
	
	cout << res << endl;
	
	return 0;
}