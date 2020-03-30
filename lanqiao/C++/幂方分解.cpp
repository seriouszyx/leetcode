#include <iostream>
#include <vector>

using namespace std;

string dfs(int n)
{
	if (n == 1) return "1";
	if (n == 0) return "0";
	string temp;
	vector<int> v;
	int cnt = 0;
	while (n)
	{
		if (n % 2 == 1) v.push_back(cnt);
		n /= 2;
		cnt++;
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		temp += "2(" + dfs(v[i]) + ")";	
		if (i != 0) temp += '+';
	}
	return temp;
}

int main()
{
	int n;
	cin >> n;
	string res = dfs(n);
	for (int i = 0; i < res.size(); i++)
	{
		if (res[i + 1] == '1') i += 3;
		cout << res[i];
	}
	return 0;
}