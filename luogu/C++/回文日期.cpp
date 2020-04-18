#include <iostream>

using namespace std;

int month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

int main()
{
	int st, end;
	cin >> st >> end;
	int res = 0;
	
	for (int i = 1; i <= 12; i++)
		for (int j = 1; j <= month[i]; j++)
		{
			int high = j % 10 * 1000
						+ j / 10 % 10 * 100
						+ i % 10 * 10
						+ i / 10 % 10 * 1;
			int temp = high * 10000 + i * 100 + j;
			if (temp < st || temp > end) continue;
			else res++;
		}
	
	
	cout << res << endl;
	
	return 0;
}