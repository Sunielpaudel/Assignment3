#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    int minValue = 1;
    int maxValue = 6;

    int die1 = (rand() % (maxValue - minValue + 1)) + minValue;
    int die2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "You rolled: " << die1 << " and " << die2 << endl;

    return 0;
}
