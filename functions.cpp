#include <iostream>
using namespace std;


string getUserName(char userLetter){
    string userName;

    cout << "Enter " << userLetter <<" user's name: ";
    getline(cin, userName);

    return userName;
}