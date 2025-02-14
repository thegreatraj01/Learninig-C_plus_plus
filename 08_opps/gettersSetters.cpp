#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int serving;
    vector<string> ingridients;

public:
    Chai()
    {
        teaName = "Lemon Tea";
        serving = 1;
        ingridients = {"Water", "Tea Leves", "Sugar"};
    }

    Chai(string name, int serv, vector<string> ingr)
    {
        teaName = name;
        serving = serv;
        ingridients = ingr;
    };
    // Getter for TeaName
    string getTeaName()
    {
        return teaName;
    }
    // Setter for teaName
    void setTeaName(string teaName)
    {
        teaName = teaName;
    }

    // Getters for serving
    int getServing()
    {
        return serving;
    }

    // Setter for serving
    void setServing(int serving)
    {
        serving = serving;
    }

    // Getters for ingridients
    vector<string> getIngridients()
    {
        return ingridients;
    }

    // Setter for ingridients
    void setIngridients(vector<string> ingridients)
    {
        ingridients = ingridients;
    }

    void disply()
    {
        cout << "teaName " << teaName << "\n"
             << "Serving " << serving << endl;
    };
};

int main()
{

    Chai lemonTea("Mashala Tea", 1, {"Water", "Tea Leves", "Sugar", "Chai Mashala"});
    lemonTea.disply();
    lemonTea.getIngridients();
};