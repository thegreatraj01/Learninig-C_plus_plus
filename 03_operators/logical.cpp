#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    int cups;
    cout << "Aru you a student write 1 for yes and 0 for no." << endl;
    cin >> isStudent;
    cout << "How many cup of tea you have purchased?" << endl;
    cin >> cups;
    if (isStudent || cups > 15)
    {
        cout << "You are eligible for a discount" << endl;
    }
    else
    {
        cout << "You are not eligible for a discount" << endl;
    }

    return 0;
}