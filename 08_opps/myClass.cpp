#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    // data members (attribute)
    string teaName; // name of the tea
    int servings;   // number of servings

    vector<string> ingredients; // list of ingredients

    // member functions
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
    Chai chaione;
    chaione.teaName = "Lemon tea";
    chaione.servings = 5;
    chaione.ingredients = {"water", "milk", "suger", "tea leafs"};
    chaione.displayChaiDetails();

    // chaitwo
    Chai chaitwo;
    chaitwo.teaName = "Mashala tea";
    chaitwo.servings = 3;
    chaitwo.ingredients = {"Milk", "Water", "Suger", "Ginger", "Tea_mashala"};
    chaitwo.displayChaiDetails();

    return 0;
}