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
string solve(vector<string> vS,string s1) {
	string  s2;
	for (string a:vS) {
		s2 = s2+a + s1;
	}
	return s2.substr(0, s2.length() - s1.length());
	
}
string solve(string s[],int length, string delimter) {
	string  s2;
	for (int i = 0; i < length; i++)
	{
		s2 = s2 + s[i] + delimter;
	}
	
	return s2.substr(0, s2.length() - delimter.length());

}
vector<string> splite (string s,string delimiter) {
	vector<string> vS;
	string  sWord;
	short pos = 0;
	int count = 0;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		sWord = s.substr(0, pos);
		if (!sWord.empty())
			vS.push_back(sWord);
		s.erase(0, pos + delimiter.length());
	}
	if (s != "")
	{
		vS.push_back(s);
	}
	return vS;
}
int main() {
	cout << "Enter your string: ";
	string s2;
	getline(cin, s2);
	vector<string> v1 = { "husam","deif","alla","odeh" };
	vector<string> v2 = splite(s2, " ");
	for (int i = 0; i < v2.size(); i++)
	{
		if (v2[i] != "Jordan")
			cout << v2[i] << " ";
		else
			cout << "USA" << " ";
	}
}
