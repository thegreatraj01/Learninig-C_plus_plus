//  Write a program that uses bitwise AND (`&`) to check which tea types are in stock. The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

#include <iostream>

using namespace std;

// Define tea types
const int GREEN_TEA = 1;   // 001 in binary
const int BLACK_TEA = 2;   // 010 in binary
const int OOLONG_TEA = 4;  // 100 in binary

int main() {
    int stock = GREEN_TEA | BLACK_TEA; // Example: Only Green and Black teas are in stock (001 | 010 = 011)
    int userChoice;
    
    cout << "Tea Types: 1 - Green, 2 - Black, 4 - Oolong" << endl;
    cout << "Enter the tea type number to check availability: ";
    cin >> userChoice;
    
    if (userChoice == GREEN_TEA || userChoice == BLACK_TEA || userChoice == OOLONG_TEA) {
        if (stock & userChoice) {
            cout << "Tea is in stock!" << endl;
        } else {
            cout << "Sorry, this tea is out of stock." << endl;
        }
    } else {
        cout << "Invalid input. Please enter 1, 2, or 4." << endl;
    }
    
    return 0;
}
