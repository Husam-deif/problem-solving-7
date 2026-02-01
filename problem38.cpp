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
string trimleft(string s){
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
			return s.erase(0, i);
	}
	return "";
}
string trimRight(string s) {
	for (int i = s.length()-1; i >0; i--)
	{
		if (s[i] != ' ')
		return s.erase(i + 1);
	}
	return "";
}
string trimLeftRight(string s) {
	s=trimleft(s);
	s=trimRight(s);
	return s;
}
int main() {
	cout << trimRight("    husam   ");
	cout << trimLeftRight("    husam   ");
	cout << trimleft("    husam   ");



}
