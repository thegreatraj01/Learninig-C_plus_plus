#include <iostream>

using namespace std;

// Function declarations
void serveTea(int cups);         // Declaration for function that takes an int
void serveTea(string teaType="tea time"); // Declaration for function that takes a string

int main()
{
    // Calling the function with a string argument
    serveTea("lemon tea");

    // Calling the function with an integer argument
    serveTea(4);

    return 0;
}

// Function definition for integer parameter
void serveTea(int cups)
{
    cout << "Serving " << cups << " cups of tea." << endl;
}

// Function definition for string parameter (with default value)
void serveTea(string teaType)
{
    cout << "Serving " << teaType << "." << endl;
}
