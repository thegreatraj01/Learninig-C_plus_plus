#include <iostream>

using namespace std;

int main()
{
    int hour;
    cout << "Enter the current hour (0-23): " << endl;
    cin >> hour;

    if (hour >= 8 && hour < 18)
    {
        cout << "The Tea shop is OPEN!" << endl;
    }
    else
    {
        cout << "The Tea shop is CLOSED!" << endl;
    }
}