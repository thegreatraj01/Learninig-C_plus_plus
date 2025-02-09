#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}
int main()
{

    int chaiserved[7] = {33, 55, 36, 63, 67, 89, 99};
    int total = totalChaiServed(chaiserved, 7);
    cout << "total " << total << endl;
    return 0;
}