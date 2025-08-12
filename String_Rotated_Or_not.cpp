#include<iostream>
using namespace std;

void rotate_clockwise(string &s){
    if(s.empty()) return;
    char last = s.back();
    for(int i = s.size()-1; i > 0; i--){
        s[i] = s[i-1];
    }
    s[0] = last;
}

void rotate_anticlockwise(string &s){
    if(s.empty()) return;
    char first = s.front();
    for(int i = 0; i < s.size()-1; i++){
        s[i] = s[i+1];
    }
    s.back() = first;
}

int main(){
    cout << "Enter String:";
    string s;
    cin >> s;
    cout << "Enter rotated string:";
    string s2;
    cin >> s2;
    
    string clockwise = s;
    rotate_clockwise(clockwise);
    rotate_clockwise(clockwise);
    
    string anticlockwise = s;
    rotate_anticlockwise(anticlockwise);
     rotate_anticlockwise(anticlockwise);
    
    if(clockwise == s2){
        cout << "clockwise";
    }
    else if(anticlockwise == s2){
        cout << "anticlockwise";
    }
    else {
        cout << "not a simple rotation";
    }
    
    return 0;
}