//In this lecture discussed about the swap the pointers in cpp

#include <iostream>
using namespace std;

void swapValues(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout << "Before swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swapValues(ptr1, ptr2);

    cout << "After swap: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}

