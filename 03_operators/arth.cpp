#include <iostream>

using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of Tea Cups: " << endl;
    cin >> cups;
    cout << "Enter the price per cup: " << endl;
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;
    // give discount if totalPrice is above 100
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - totalPrice * 5 / 100;
        cout << "Discounted price is " << discountedPrice << endl;
    }
    else
    {
        cout << "Total price is " << totalPrice << endl;
    }

    return 0;
}