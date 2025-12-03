#include <iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    while(n > 1) f *= n--;
    return f;
}

int main() {
    for(int num = 1; num <= 500; num++) {
        int temp = num, sum = 0;
        while(temp > 0) {
            int d = temp % 10;
            sum += fact(d);
            temp /= 10;
        }
        if(sum == num) cout << num << " ";
    }
    return 0;
}
