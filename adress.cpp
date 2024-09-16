#include <iostream>
using namespace std;

int main(){

    string street, city, state, zipcode;
    cout << "Enter street name: ";
    getline(cin, street);
    cout << "Enter city name: ";
    getline(cin, city);
    cout << "Enter state name: ";
    getline(cin, state);
    cout << "Enter zipcode: ";
    getline(cin, zipcode);

    cout << " Your address is:" << endl;
    cout<<"-------------------"<<endl;
    cout << street << endl;
    cout << city << ", " << state << ", " << zipcode << endl;

    return 0;
}