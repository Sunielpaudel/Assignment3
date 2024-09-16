#include <iostream>
using namespace std;

// int main(){

//     double value1;
//     double value2;
//     double largeValue;

//     cout<<"enter value1: ";
//     cin>>value1;
//     cout<<"enter value2: ";
//     cin>>value2;
//     if(value1 > value2){
//         largeValue = value1;
//     }else{
//         largeValue = value2;
//     }

//     cout<<"The largervalue is: "<<largeValue<<endl;

//     return 0;
// }

int main(){

    double value1;
    double value2;
    double largeValue;

    cout << "enter value1: ";
    cin >> value1;
    cout << "enter value2: ";
    cin >> value2;

    largeValue = (value1 > value2) ? value1 : value2;
    cout << "The largervalue is: " << largeValue << endl;
    return 0;
}