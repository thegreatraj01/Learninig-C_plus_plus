#include <iostream>

using namespace std;

int main()
{
    int cups = 5; // Number of cups of tea
    int i = 100;
    for (int i = 1; i <= cups;)
    {
        i++;
        cout << "Brewing cup " << i << " of tea:\n";
        cout << "1. Boil water.\n";
        cout << "2. Add tea leaves or a tea bag to a cup.\n";
        cout << "3. Pour hot water into the cup.\n";
        cout << "4. Steep for 3-5 minutes.\n";
        cout << "5. Add sugar or milk if desired.\n";
        cout << "6. Stir and enjoy!\n";
        cout << "----------------------\n";
        cout << i << endl;
    }
    cout << "out side of loop \n";
    cout << i << endl;

    return 0;
}
