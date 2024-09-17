#include<iostream>
using namespace std;

int main() {
    double sales;
    double commision;

    cout << "Enter sales amount: $";
    cin >> sales;

    if (sales <= 10000) {
        commision = sales * 0.10;
    }
    else if (sales <= 15000) {
        commision = sales * 0.15;
    }
    else {
        commision = sales * 0.20;
    }

    cout << " The commision is : $" << commision << endl;
    return 0;
}