#include <iostream>
using namespace std;

int main() {
    int num;

    while(true) {
        cout << "Enter number (-1 to stop): ";
        cin >> num;

        if(num == -1) break;
        if(num < 0) continue;

        cout << "You entered: " << num << endl;
    }

    return 0;
}
