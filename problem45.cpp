#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> spliteString(string s, string delimter) {

    vector<string> vWords;
    string sWord;
    short pos;
    while ((pos =s.find(delimter)) != std::string::npos) {
        sWord = s.substr(0, pos);
        if (sWord != "") {
            vWords.push_back(sWord);
        }
        s.erase(0, pos + delimter.length());
    }
    if (s != "") {
        vWords.push_back(s);
    }
    return vWords;
}


struct client
{
	string accountNumber;
	string pinCode;
	string name;
	string phone;
	int accountBalance;
};

client Readclient()
{
    client client;

    cout << "Enter Account Number: ";
    getline(cin, client.accountNumber);

    cout << "Enter Pin Code: ";
    getline(cin, client.pinCode);

    cout << "Enter Name: ";
    getline(cin, client.name);

    cout << "Enter Phone: ";
    getline(cin, client.phone);

    cout << "Enter Account Balance: ";
    cin >> client.accountBalance;

    return client;
}

string solve(client a,string delimter) {
	string s;
	s = to_string(a.accountBalance)  + delimter + a.accountNumber + delimter + a.name + delimter + a.phone + delimter + a.pinCode;
	return s;
}
int main()
{
    cout << solve(Readclient(), "#//#")<<endl;
}

