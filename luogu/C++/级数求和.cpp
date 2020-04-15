#include <iostream>

using namespace std;

int main()
{
	int k;
	cin >> k;
	double sn = 0;
	for (int i = 1; i <= 1e7; i++)
	{
		sn += 1.0 / i;
		if (sn > k)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}