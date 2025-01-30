// > Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.

#include <iostream>

using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, taxedPrice;

    cout << "Enter the number of Tea Cups: " << endl;
    cin >> cups;
    cout << "Enter the price per cup: " << endl;
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    taxedPrice = totalPrice + totalPrice * 5 / 100;
    cout << "after tax  price is " << taxedPrice << endl;

    return 0;
}