#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    while(n > 1) f *= n--;
    return f;
}

int main() {
    int num, temp, sum = 0;
    cout << "Enter number: ";
    cin >> num;

    temp = num;
    while(temp > 0) {
        int d = temp % 10;
        sum += fact(d);
        temp /= 10;
    }

    if(sum == num) cout << "Strong number";
    else cout << "Not a strong number";

    return 0;
}
