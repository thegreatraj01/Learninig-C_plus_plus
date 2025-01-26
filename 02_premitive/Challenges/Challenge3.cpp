#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;  // Variable to store tea name
    int teaQuantity; // Variable to store the number of cups

    // Ask for user's favorite tea
    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);  // Reads the entire line for the tea order

    // Ask for the quantity of cups
    cout << "How many cups of " << userTea << " would you like to have? \n";
    cin >> teaQuantity;  // Reads the quantity as an integer

    // Fun output message
    cout << "\nGreat choice! You ordered " << teaQuantity << " cup(s) of " << userTea << ".\n";
    cout << "Enjoy your tea time! 🍵\n";

    return 0;
}
