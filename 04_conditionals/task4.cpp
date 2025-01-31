#include <iostream>

using namespace std;

// Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea: $2
// * Black Tea: $3
// * Oolong Tea: $4

int main()
{
    int choise;
    double price;
    cout << "Select your tea \n";
    cout << "1. Green Tea \n";
    cout << "2. Black Tea \n";
    cout << "3. Oolong Tea \n";
    cin >> choise;

    switch (choise)
    {
    case 1:
        price = 2.0;
        cout << "You have selected Green Tea. price: " << price << endl;
        break;
    case 2:
        price = 3.0;
        cout << "You have selected Black Tea. price: " << price << endl;
        break;
    case 3:
        price = 4.0;
        cout << "You have selected Oolong Tea. price: " << price << endl;
        break;

    default:

        cout << "You have selected wrong choise , plese select again" << price << endl;
        break;
    }
}