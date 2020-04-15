#include <iostream>

using namespace std;


int main()
{
	int n;
	cin >> n;
	int cnt = 0, start = 0, rest = 0;
	for (int i = 0; i < 1e7; i++)
	{
		cnt += i;
		if (cnt + i + 1 >= n)
		{
			start = i + 1;
			rest = n - cnt;
			break;
		}		
	}
	if (start % 2 == 0)
	{
		cout << rest <<  '/' << (start + 1 - rest) << endl;
	}
	else 
	{
		cout << (start + 1 - rest) <<  '/' << rest << endl;
	}
	
	return 0;
}