#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    cout << "Enter the number of tea bafs you have: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        // teaBags = teaBags + 5;
        teaBags += 5;
    }
    cout << "Your tea bafs are: " << teaBags << endl;
    return 0;
}