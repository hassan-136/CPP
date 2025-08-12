#include<iostream>
using namespace std;

string toRoman(int num) {
    string res = "";
    // Values and corresponding symbols
    int values[] =    {1000, 900, 500, 400, 100, 90,  50,  40,  10,  9,   5,   4,   1};
    string symbols[] ={"M",  "CM","D", "CD","C", "XC","L", "XL","X", "IX","V", "IV","I"};
    
    int index = 0;
    while (num > 0) {
        if (num >= values[index]) {
            res += symbols[index];
            num -= values[index];
        } else {
            index++;
        }
    }
    return res;
}

int main() {
    int number;
    cout << "Enter Integer: ";
    cin >> number;
    cout << "Roman Numeral: " << toRoman(number);
    return 0;
}
