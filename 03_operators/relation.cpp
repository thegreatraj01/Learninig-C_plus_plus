#include <iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the number of cups you have: ";
    cin >> cups;
    if (cups > 20)
    {
        cout << "You have earned a gold bladge " << endl;
    }
    else if (cups > 10 && cups <= 20)
    {
        cout << "You have earned a silver bladge " << endl;
    }
    else
    {
        cout << "No bladge for you." << endl;
    }
    return 0;
}