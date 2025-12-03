#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 8, 1, 5, 9, 2};
    int n = 6, key;
    
    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Number found at index " << i;
            break;
        }
    }
    return 0;
}
