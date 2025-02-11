#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // Constructor with default arguments
    Chai(string name = "Milk Tea", int serv = 1, vector<string> ingi = {"Milk", "Sugar", "Tea Leaves"})
    {
        teaName = name;
        servings = serv;
        ingredients = ingi;
        cout << "Constructor called" << endl;
    }

    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main()
{
    // 1. Using default values
    Chai chai1;
    chai1.displayChaiDetails();

    cout << "-----------------" << endl;

    // 2. Providing only servings and ingredients, keeping default tea name
    Chai chai2("Masala Tea", 2, {"Water", "Tea Leaves"});
    chai2.displayChaiDetails();

    cout << "-----------------" << endl;

    // 3. Providing only ingredients, keeping default tea name and servings
    Chai chai3("Ginger Tea", 3);
    chai3.displayChaiDetails();

    return 0;
}
