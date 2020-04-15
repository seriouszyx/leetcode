#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	cnt += (s[0] - '0') * 1;
	cnt += (s[2] - '0') * 2;
	cnt += (s[3] - '0') * 3;
	cnt += (s[4] - '0') * 4;
	cnt += (s[6] - '0') * 5;
	cnt += (s[7] - '0') * 6;
	cnt += (s[8] - '0') * 7;
	cnt += (s[9] - '0') * 8;
	cnt += (s[10] - '0') * 9;
	int ans = cnt % 11;
	if (ans != 10 && ans == s[12] - '0')
		cout << "Right" << endl;
	else if (ans == 10 && s[12] == 'X')
		cout << "Right" << endl;
	else if (ans != 10 && ans != s[12] - '0')
		cout << s.substr(0, s.size() - 1) << ans << endl;
	else if (ans == 10 && s[12] != 'X')
		cout << s.substr(0, s.size() - 1) << 'X' << endl;
	
	return 0;
}