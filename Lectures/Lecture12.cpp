//In this lecture : the topic on do while loops

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter a positive number (enter a negative number to quit)";
        cin >> number;

        if (number > 0) {
            sum += number;
        }

    } while (number >= 0);

    cout << "The total sum of positive numbers entered is: " << sum << endl;

    return 0;
}

