#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    cout << left << setw(16) << "Course" << setw(10) << setw(10) << "Student" << endl;
    cout << "-----------------------" << endl;

    cout << left << setw(10) << "C++" << right << setw(10) << "100" << endl;
    cout << left << setw(10) << "JavaScript" << right << setw(9) << "50" << endl;

    return 0;
}