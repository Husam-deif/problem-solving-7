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

string convertLineToRecord(client a,string delimter) {
	string s;
	s = to_string(a.accountBalance)  + delimter + a.accountNumber + delimter + a.name + delimter + a.phone + delimter + a.pinCode;
	return s;
}
client convertRecordToLine(string s, string delimter) {
    vector<string> vWord = spliteString(s, "#//#");
    client c1;
    c1.accountBalance = stoi(vWord[0]);
    c1.accountNumber = vWord[1];
    c1.name = vWord[2];
    c1.phone = vWord[3];
    c1.pinCode = vWord[4];
    return c1;
}

void PrintClientRecord(client client)
{
    cout << "\nThe following is the extracted client record:\n\n";

    cout << "Account Number : " << client.accountNumber << endl;
    cout << "Pin Code       : " << client.pinCode << endl;
    cout << "Name           : " << client.name << endl;
    cout << "Phone          : " << client.phone << endl;
    cout << "Account Balance: " << client.accountBalance << endl;
}

int main()
{
    client c1 = Readclient();

    cout << endl << convertLineToRecord(c1, "#//#")<<endl;
    PrintClientRecord(c1);
    PrintClientRecord(convertRecordToLine(convertLineToRecord(c1, "#//#"), "#//#"));
}

