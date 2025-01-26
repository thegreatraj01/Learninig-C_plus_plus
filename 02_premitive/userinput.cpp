#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);  // Reads the entire line for the tea order.

    cout << "How many cups of " << userTea << " would you like to have? \n";
    cin >> teaQuantity;  // Reads the quantity.

    cout << "You ordered: " << userTea << endl
         << "Number of cups: " << teaQuantity << endl;

    return 0;
}
