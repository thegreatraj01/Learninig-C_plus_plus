#include <iostream>

using namespace std;

//  Lambda with Parameters
int main()
{

    // lamda
    [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea " << endl;
    }(8);
    return 0;
}