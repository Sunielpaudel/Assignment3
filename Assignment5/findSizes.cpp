#include<iostream>
using namespace std;

int main() {

    cout << "The size of short is:  " << sizeof(short) << endl;
    cout << "Minimum value of shorts: " << numeric_limits<short>::min() << endl;
    cout << "Maximum value of shorts: " << numeric_limits<short>::max() << endl;
    
    cout << "The size of double is: " << sizeof(double) << endl;
    cout << "Minimum value of double: " << numeric_limits<double>::min() << endl;
    cout << "Maximum value of double: " << numeric_limits<double>::max() << endl;

    return 0;
}
