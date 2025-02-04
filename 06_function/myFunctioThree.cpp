#include <iostream>

using namespace std;

void pourCups(int &cups)
{
    cups = cups + 5;
    cout << "Poured cups " << cups << endl;
}

int main()
{

    int cups = 3;
    pourCups(cups);
    cout << "cups " << cups << endl;
    return 0;
}