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
int main() {
	vector<string> v1 = { "husam","deif","alla","odeh" };\
	string v2[6] = {"husam","deif","alla","odeh"};
	cout<<solve(v2,4,"@")<<endl;

}
