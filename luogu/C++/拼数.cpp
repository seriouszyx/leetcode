#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool cmp(string s1, string s2)
{
	return s1 + s2 > s2 + s1;
}

int main()
{
	string ss[25];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> ss[i];
	sort(ss, ss + n, cmp);
	for (int i = 0; i < n; i++) cout << ss[i];
	return 0;
}