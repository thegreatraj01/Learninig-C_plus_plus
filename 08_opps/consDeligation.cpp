#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients; // Fixed spelling

    // Delegating constructor
    Chai(string name) : Chai(name, 1, {"Water", "Sugar"}) {} // Fixed space issue

    Chai(string name, int serv, vector<string> inde)
    {
        teaName = name;
        serving = serv;
        ingredients = inde;
        cout << "Main constructor called" << endl;
    }

    void display() // Fixed function name
    {
        cout << "Tea Name: " << teaName << "\n"
             << "Serving: " << serving << "\n"
             << "Ingredients: ";
        for (const auto &item : ingredients)
        {
            cout << item << " ";
        }
        cout << endl;
    }
};

int main()
{
    Chai quickChai("Lemon Tea");
    quickChai.display(); // Fixed function name

    return 0;
}
