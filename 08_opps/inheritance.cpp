#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base/main/parent  class
class Tea
{
protected:
    string teaName;
    int serving;

public:
    Tea(string name, int serv) : teaName(name), serving(serv)
    {
        cout << "Tea constructor called" << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "brewing" << teaName << " With generic method " << endl;
    }
    virtual void serve() const
    {
        cout << "serving" << teaName << " With generic method " << endl;
    }
    virtual ~Tea()
    {
        cout << "Tea distractor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serv) : Tea("green tea", serv)
    {
        cout << "Green tea constractuor called " << teaName << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
    }
    ~GreenTea()
    {
        cout << "Greentea distractor called " << endl;
    }
};

class MashalaTea : public Tea
{
public:
    MashalaTea(int serve) : Tea("mashalaTea", serve)
    {
        cout << "MashalaTea constructor" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " with milk ans mashala" << endl;
    }

    ~MashalaTea()
    {
        cout << "MashalaTea destructor called" << endl;
    }
};

// class SpicyMashalaTea : public MashalaTea{
//     public :
// we can not override this function anymore because of final keyword
//     void brew() const override
//     {
//         cout << "Brewing " << teaName << " with milk ans mashala" << endl;
//     }
// }

int main()
{
    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MashalaTea(4);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
};