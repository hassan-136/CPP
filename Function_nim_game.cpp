#include<iostream>
using namespace std;
bool nimgame(int num){
    if(num%4==0){
        return false;
    }
    else return true;
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<nimgame(num);
}