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
bool isVowels(char c1) {
	c1 = tolower(c1);
	if (c1 == 'i' || c1 == 'o' || c1 == 'u' || c1 == 'a' || c1 == 'e')
		return true;
	else
		return false;
}
void solve() {
	int count = 0;
	string s1 = readString("Enter string: ");
	for (int i = 0; i < s1.length(); i++)
	{
		if (isVowels(s1[i]))
			count++;
	}
	cout <<"Number of Vowels is: " << count << endl;
}
int main() {
	solve();
}
