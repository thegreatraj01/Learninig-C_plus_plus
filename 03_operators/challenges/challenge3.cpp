//  A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the number of cups you have: ";
    cin >> cups;
    if (cups > 12)
    {
        cout << "You have earned a 10% discount " << endl;
    }
    else
    {
        cout << "No discount for you." << endl;
    }
    return 0;
}