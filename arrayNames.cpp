#include <iostream>
using namespace std;

int main(){

    string names[3];
    cout << "Enter first name: ";
    getline(cin, names[0]);
    cout << "Enter second name: ";
    getline(cin, names[1]);
    cout << "Enter third name: ";
    getline(cin, names[2]);
    cout<<endl;

    cout << "The first name you typed is: " << names[0] << endl;

    return 0;
}
