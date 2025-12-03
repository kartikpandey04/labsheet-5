#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    while(true) {
        cout << "Enter number (0 to stop): ";
        cin >> num;

        if(num == 0) break;
        if(num > 0) count++;
    }

    cout << "Positive numbers entered: " << count;
    return 0;
}
