#include <iostream>

using namespace std;

int main()
{
    int shopSlaes[3][5] = {
        {23, 55, 53, 67, 88}, // shop 1 slaes for week 1
        {23, 55, 53, 67, 88}, // shop 2 slaes for week 1
        {23, 55, 53, 67, 88}  // shop 3slaes for week 1
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "I am at shop " << i + 1 << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "shop" << i + 1 << " day" << j + 1 << " " << shopSlaes[i][j] << "cups sale" << endl;
        }
    }

    return 0;
}