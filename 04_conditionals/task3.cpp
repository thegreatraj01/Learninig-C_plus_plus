#include <iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the number of cups you want to order: " << endl;
    cin >> cups;
    if (cups < 10)
    {
        cout << "No discount for you" << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You will get 10% discount" << endl;
    }
    else if (cups > 20)
    {
        cout << "You will get 20% discount" << endl;
    }
}