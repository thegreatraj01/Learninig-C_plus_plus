#include <iostream>

using namespace std;

int *prepareChaiorders(int cups)
{

    int *orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    };
    return orders;
}
int main()
{
    int cups = 6;
    int *orders = prepareChaiorders(cups);

    cout << "orders " << orders[0] << endl;
    delete[] orders;
    cout << "orders " << orders[0] << endl;
    return 0;
}