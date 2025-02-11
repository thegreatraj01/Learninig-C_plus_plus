#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // default constructor
    Chai()
    {
        teaName = "Unknown Tea";
        servings = 1;
        ingredients = {"water", "Tea leaves"};
        cout << "constructor called" << endl;
    }
    void displayChaiDetails()
    {
        cout << "Tea Name " << teaName << endl;
        cout << "Tea Servings " << servings << endl;
        cout << "ingredients ";
        for (string ingredient : ingredients)
        {
            cout << " " << ingredient << " ";
        }
        cout << endl;
    };
};

int main()
{
    Chai defaultChai;
    defaultChai.displayChaiDetails();
    return 0;
}