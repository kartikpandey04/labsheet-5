#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cout << "Enter number: ";
    cin >> n;

    while(n > 1) {
        fact *= n;
        n--;
    }

    cout << "Factorial = " << fact;
    return 0;
}
