#include<iostream>
using namespace std;

int Cube(int n){
    int ans =n*n*n;
    return ans;;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<Cube(n);
}
