#include <iostream>

using namespace std;

int main()
{
    int teaTemperature[5] = {23, 34, 44, 42, 67};

    for (int i = 0; i < 5; i++)
    {
        cout << "Tea Temperature: " << teaTemperature[i] << endl;
    }
    return 0;
}