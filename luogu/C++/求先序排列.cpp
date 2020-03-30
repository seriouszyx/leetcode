#include <iostream>
#include <cstring>

using namespace std;

void dfs(string s1, string s2)
{
	if (s1.size() <= 0) return;
	char ch = s2[s2.size() - 1];
	cout << ch;
	int k = s1.find(ch);
	dfs(s1.substr(0, k), s2.substr(0, k));
	dfs(s1.substr(k + 1), s2.substr(k, s2.size() - 1 - k));
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	dfs(s1, s2);
	cout << endl;
	return 0;	
}