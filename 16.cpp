#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for(int num = 1; num <= 500; num++) {
        int temp = num, sum = 0;
        while(temp > 0) {
            int d = temp % 10;
            sum += d * d * d;
            temp /= 10;
        }
        if(sum == num)
            cout << num << " ";
    }
    return 0;
}
