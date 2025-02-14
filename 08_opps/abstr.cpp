#include <iostream>

using namespace std;

class Tea
{
public:
    virtual void prepareIngridients() = 0; // pure virtual function
    virtual void brew() = 0;               // pure virtual function
    virtual void serve() = 0;              // pure virtual function

    void makeTea()
    {
        prepareIngridients();
        brew();
        serve();
    }
};

// Derived class
class GreenTea : public Tea
{
public:
    void prepareIngridients() override
    {
        cout << "Green Leaves and water are ready!" << endl;
    };
    void brew() override
    {
        cout << "Green Tea brewed " << endl;
    };
    void serve() override
    {
        cout << "Green Tea served " << endl;
    };
};

class MashalaTea : public Tea
{
public:
    void prepareIngridients() override
    {
        cout << "Green Leaves and water are ready! with Mashala" << endl;
    };
    void brew() override
    {
        cout << "Mashala Tea brewed " << endl;
    };
    void serve() override
    {
        cout << "Mashala Tea served " << endl;
    };
};
int main()
{
    MashalaTea mashalatea;
    GreenTea greentea;
    mashalatea.makeTea();
    greentea.makeTea();
    return 0;
};