#include <iostream>
#include <string>
using namespace std;

int main()
{
    string citizenshipResponse;
    bool isUSCitizen;
    char hasDegree;
    int yearsExperience;

    cout << "Are you a US citizen? (yes/no): ";
    getline(cin, citizenshipResponse);

    isUSCitizen = (citizenshipResponse == "yes" || citizenshipResponse == "Yes");

    if (isUSCitizen)
    {
        cout << "Do you have a bachelor's degree? (y/n): ";
        cin >> hasDegree;

        cout << "How many years of experience do you have?: ";
        cin >> yearsExperience;

        bool hasBachelorDegree = (hasDegree == 'y' || hasDegree == 'Y');
        bool hasRequiredExperience = (yearsExperience >= 2);

        if (hasBachelorDegree || hasRequiredExperience)
        {
            cout << "You are eligible for the job!" << endl;
        }
        else
        {
            cout << "You are not eligible for the job." << endl;
        }
    }
    else
    {
        cout << "You must be a US citizen to be eligible for the job." << endl;
    }
    return 0;
}