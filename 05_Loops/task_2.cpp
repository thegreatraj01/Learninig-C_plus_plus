#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    do
    {
        cout << "You want more tea type(yes/no)" << endl;
        getline(cin, response);
        cout << "Your tea get served:" << endl;
        cout << response << endl;
    } while (response != "no" && response != "NO");
}
