#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int cup = 1;
    
    while (true) {
        cout << "Serving cup " << cup << " of tea:\n";
        cout << "Type 'stop' to stop serving tea or press enter to continue: ";
        getline(cin, input);
        
        if (input == "stop") {
            cout << "Tea serving stopped." << endl;
            break;
        }
        
        cup++;
    }
    
    return 0;
}
