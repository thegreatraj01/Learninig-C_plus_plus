#include <iostream>

using namespace std;

class BackAccount
{
private:
    string accountNumber;
    double balance;

public:
    BackAccount(string accountNum, double bal)
    {
        accountNumber = accountNum;
        balance = bal;
    }
    // ~backAccount();

    // getter
    double getBalance() const
    {
        return balance;
    }

    // method to deposit money
    void depositMoney(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited amount " << amount << endl;
        }
        else
        {
            cout << "Invalid amount for deposit \n";
        }
    }

    // method for withdraw money
    void withdrawMoney(double amount)
    {
        if (amount > 0 && balance <= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid amount for withdraw \n";
        }
    }
};

int main()
{

    BackAccount myaccount("234", 500);
    cout << myaccount.getBalance();
}