#include<iostream>
using namespace std;

void Print(int n){
    for(int i=1;i<=n;i++){
        cout<<"Hello"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Print(n);
}