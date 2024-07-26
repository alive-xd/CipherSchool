
#include <iostream>
using namespace std;

int main() {
    int a[10];
    int i, j;
    cout << "Enter the elements to sort: ";
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int temp;
    for (j = 0; j < 9; j++) {
        for (i = 0; i < 10 - j - 1; i++) {  
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

