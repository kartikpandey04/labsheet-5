#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    switch(x) {
        case 1: cout << "You entered One"; break;
        case 2: cout << "You entered Two"; break;
        default: cout << "No matching case!"; 
    }
    return 0;
}
