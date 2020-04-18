#include <iostream>
#include <cstring>

using namespace std;

typedef long long ll;

const int N = 30;
ll rpt[N][N][N];

ll w(ll a, ll b, ll c)
{
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	else if (rpt[a][b][c] != 0) return rpt[a][b][c];
	else if (a > 20 || b > 20 || c > 20) rpt[a][b][c] = w(20, 20, 20);
	else if (a < b && b < c) rpt[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else rpt[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return rpt[a][b][c];
} 

int main()
{
	while(1)
	{
		ll n1, n2, n3;
		cin >> n1 >> n2 >> n3;	
		if (n1 == -1 && n2 == -1 && n3 == -1) break;
		cout << "w(" << n1 << ", " << n2 << ", " << n3 << ") = ";
		if (n1 > 20) n1 = 21;
		if (n2 > 20) n2 = 21;
		if (n3 > 20) n3 = 21;
		cout << w(n1, n2, n3) << endl;	
	}
	
		
	return 0;
}