#include <iostream>
#include <string>
#include <iomanip> // For setting precision

using namespace std;

int main()
{
    string teaType = "Green Tea"; // Tea type
    float pricePerKg = 750.50;    // Price per kilogram
    char rating = 'A';

    cout << "Tea type " << teaType << endl;
    cout << "Price per Kg " << fixed << setprecision(2) << pricePerKg << endl;
    cout << rating << endl;
}