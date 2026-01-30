#include <iostream>
#include <string>
#include<vector>
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
void solve() {
	int count = 0;
	string s1=readString("Please Enter you string");
	char s2 = readChar("Please Enter your character");
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == s2)
			count++;
	}
	cout << count << endl;
}
int main() {
	solve();
	
}
