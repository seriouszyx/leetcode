#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	string s;
	getline(cin, s);
	int res = 0;
	for (int i = 0; i < s.size(); i++)
		if ((s[i] >= 'A' && s[i] <= 'Z') || 
			(s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= '0' && s[i] <= '9') )
		res++;
	cout << res << endl;
	return 0;
}