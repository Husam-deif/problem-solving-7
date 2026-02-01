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
int main() {
	vector<string> v = { "husam","deif","alla","odeh" };
	cout<<solve(v,"@")<<endl;

}
