#include <iostream>
#include <string>
#include <vector>
using namespace std;
string readString(string s) {
	cout << s << endl;

	string s2;
	getline(cin, s2);

	return s2;
}
char readChar(string s) {
	cout << s << endl;
	char s2;
	cin >> s2;
	return s2;
}
bool isVowels(char c1) {
	c1 = tolower(c1);
	if (c1 == 'i' || c1 == 'o' || c1 == 'u' || c1 == 'a' || c1 == 'e')
		return true;
	else
		return false;
}
void solve() {
	vector<string> vS;
	string s = readString("");
	string delimiter = " ",sWord;
	short pos = 0;
	int count = 0;
	while ((pos=s.find(delimiter)) != std::string::npos) {
		sWord = s.substr(0, pos);
		if (!sWord.empty())
			vS.push_back(sWord);
		s.erase(0, pos + delimiter.length());
	}
	if (s!="")
	{
		vS.push_back(s);
	}
	 for (string x : vS) {
        cout << x << endl;
    }
}
int main() {
	solve();
}
