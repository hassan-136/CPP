#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    // Euclidean Algorithm for GCD
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    cout << "GCD is: " << num1 << endl;

    return 0;
}
