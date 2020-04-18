#include <iostream>

using namespace std;

long long a1, a2, n;

int main()
{
	cin >> a1 >> a2 >> n;
	long long d = a2 - a1;
	cout << n * a1 + n * (n - 1) * d / 2;
	
	return 0;
}