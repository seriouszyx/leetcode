#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	string word, sen;
	getline(cin, word);
	getline(cin, sen);
	int res, cnt = 0;
	for (int i = 0; i < word.size(); i++)
		word[i] = toupper(word[i]);
	for (int i = 0; i < sen.size(); i++)
		sen[i] = toupper(sen[i]);
	for (int i = 0; i <= sen.size() - word.size(); i++)
	{
		int j;
		for (j = 0; j < word.size(); j++)
		{
			if (sen[i + j] != word[j]) break;
			if (i > 0 && sen[i - 1] != ' ') break;	
		}
		if (j == word.size() && (sen[i + j] == ' ' || i + j == sen.size())) 
		{
			if (cnt == 0) res = i;
			cnt++;	
		}
	} 
	
	if (cnt == 0) cout << "-1" << endl;
	else cout << cnt << ' ' << res << endl;
	
	return 0;
}