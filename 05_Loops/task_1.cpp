#include <iostream>

using namespace std;

int main()
{
    int teaCups;  
    cout << "Enter the number of tea cups to serve :" << endl;
    cin >> teaCups;

    while (teaCups > 0)
    {
        cout << "tea cup is served reamaing tea cups " << teaCups << endl;
        teaCups--;
    }
    cout << "All tea cups are served " << endl;
    return 0;
}