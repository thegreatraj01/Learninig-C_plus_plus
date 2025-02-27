#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>

using std::cout;
using std::endl;
using namespace std;

struct Employee
{
    int id;
    std::string name;
    double salary;
};

void displayEmployee(Employee &emp)
{
    cout << "Employee id " << emp.id << endl;
    cout << "Employee name " << emp.name << endl;
    cout << "Salary " << emp.salary << endl;
    cout << endl;
};

int main()
{
    std::vector<Employee> employees = {
        {01, "Hitesh", 100000.0},
        {02, "Raj", 40000.0},
        {03, "Tejesh", 70000.0},
        {04, "Suresh", 30000.0},
        {05, "Saurabh", 10000.0},
    };

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    // for_each(employees.begin(), employees.end(), displayEmployee);

    std::vector<Employee> highEarners;

    copy_if(employees.begin(), employees.end(),
            back_inserter(highEarners),
            [](const Employee &e)
            {
                return e.salary > 50000;
            });

    cout << "highEarners" << endl;
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(), employees.end(),
                                    0.0,
                                    [](double sum, const Employee &e)
                                    {
                                        return sum + e.salary;
                                    });

    double averageSalary = totalSalary / employees.size();
    cout << "averageSalary of employee " << averageSalary << endl;

    auto highestPaid = max_element(employees.begin(), employees.end(),
                                   [](const Employee &e1, const Employee &e2)
                                   {
                                       return e1.salary < e2.salary;
                                   });
    return 0;
};