#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char> st;
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        cout<<st.top();
        st.pop();
    }
}