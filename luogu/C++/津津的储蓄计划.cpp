#include <iostream>

using namespace std;

const int N  = 15, INV = 300;
int g[N];

int main()
{
	for (int i = 0; i < 12; i++) cin >> g[i];
	int mo = 0;	// 存在妈妈的钱
	int rest = 0;
	for (int i = 0; i < 12; i++)
	{
		rest += INV;
		rest -= g[i];
		if (rest < 0)
		{
			cout << -(i + 1) << endl;
			return 0;
		}
		
		if (rest >= 100) 
		{
			int temp = rest / 100;
			mo += temp * 100;
			rest -= temp * 100;
		}				
	}
	cout << rest + mo * 1.2 << endl;	
	
	return 0;
}