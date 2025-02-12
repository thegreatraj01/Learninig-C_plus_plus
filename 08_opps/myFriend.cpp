#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
// using namespace std;

class Chai
{
private:
    int serving;
    string teaNmae;

public:
    Chai(int serving, string name) : serving(serving), teaNmae(name) {};

    friend bool compareservings(const Chai &chai1, const Chai &chai2);

    void disply()
    {
        cout << "teaNamee: " << teaNmae << endl;
    }
};

bool compareservings(const Chai &chai1, const Chai &chai2)
{
    return chai1.serving > chai2.serving;
}

int main()
{
    Chai mashalachai(12, "mashala Chai");
    Chai gingerchai(4, "ginger chai");

    if (compareservings(mashalachai, gingerchai))
    {
        cout << "mashala chai is having MORE servings" << endl;
    }
    else
        cout << "mashala chai is having LESS servings" << endl;
    {
        /* code */
    }

    // mashalachai.disply();
    // gingerchai.disply();
    return 0;
}