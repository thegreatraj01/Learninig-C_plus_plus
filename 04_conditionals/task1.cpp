#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userOrder;
    cout << "Enter you tea order" << endl;
    getline(cin, userOrder);
    if (userOrder == "Green Tea")
    {
        cout << "You have ordered green tea" << endl;
    }
}