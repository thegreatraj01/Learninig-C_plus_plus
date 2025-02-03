#include <iostream>
#include <string>

using namespace std;

int main()
{
    string teaTypes[4] = {"Black Tea", "Green Tea", "Oolong Tea", "Herbal Tea"};

    for (int i = 0; i < 4; i++)
    {
        if (teaTypes[i] == "Green Tea")
        {
            cout << "Skipping " << teaTypes[i] << " as per your preference.\n";
            continue;
        }

        cout << "1. Boil water.\n";
        cout << "2. Add " << "tea" << " leaves or a tea bag to a cup.\n";
        cout << "3. Pour hot water into the cup.\n";
        cout << "4. Steep for 3-5 minutes.\n";
        cout << "5. Add sugar or milk if desired.\n";
        cout << "6. Stir and enjoy!\n";
        cout << "----------------------\n";
    };

    return 0;
}
