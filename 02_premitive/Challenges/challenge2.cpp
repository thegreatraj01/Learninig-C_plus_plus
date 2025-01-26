#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main()
{
    int basePrice;
    cout << "guess the base price \n";
    cin >> basePrice;

    float newPrice = (10.0 / 100) * basePrice + basePrice;

    // cout << "guessed base price: " << basePrice << endl;
    // cout << "Type of basePrice: " << typeid(basePrice).name() << endl

    cout << "newPrice: " << newPrice << endl;
}