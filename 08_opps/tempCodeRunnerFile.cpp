#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string *teaName;
    int servings;
    vector<string> ingredients;

    // Constructor with default arguments
    Chai(string name, int serv, vector<string> ingi)
    {
        teaName = new string(name);
        servings = serv;
        ingredients = ingi;
        cout << "Constructor called" << endl;
    }

    Chai(Chai &other)
    {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy Constructor called" << endl;
    }

    ~Chai()
    {
        delete teaName;
        cout << "Distructor called" << endl;
    }
    void displayChaiDetails()
    {
        cout << "Tea Name: " << *teaName << endl;
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

    Chai chai1("Masala Tea", 2, {"Water", "Tea Leaves"});
    // chai1.displayChaiDetails();
    // copy the object
    Chai chai2 = chai1;
    chai2.displayChaiDetails();

    *chai1.teaName = "default Mashala tea";
    cout << "og tea--------------: " << endl;
    chai1.displayChaiDetails();
    cout << "copied tea-------------: " << endl;
    chai2.displayChaiDetails();

    return 0;
}
