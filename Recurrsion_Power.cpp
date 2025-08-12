#include<iostream>
using namespace std;

int power(int num, int po) {
    if (po == 0)  // base case
        return 1;
    return num * power(num, po - 1);
}

int main() {
    int num, po;
    cout << "Enter num: ";
    cin >> num;
    cout << "Enter power: ";
    cin >> po;

    cout << num << "^" << po << " = " << power(num, po) << endl;
    return 0;
}
