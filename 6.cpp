#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool prime = true;

    cout << "Enter number: ";
    cin >> n;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    if(prime) cout << "Prime";
    else cout << "Not Prime";

    return 0;
}
