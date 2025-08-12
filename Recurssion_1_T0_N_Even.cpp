#include<iostream>
using namespace std;
void print (int num){
    if(num<=2){
        cout<<2<<" ";
        return;
    }
    print(num-2);
    cout<<num<<" ";
}
int main(){
    int num;
    cin>>num;
    if(num%2==1){
        num-=1;
    }
    print(num);
}