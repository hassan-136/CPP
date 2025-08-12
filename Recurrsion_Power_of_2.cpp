#include<iostream>
using namespace std;
int power(int num){
    if (num==0){
        return 1;
    }
    return 2* power(num-1);
}

int main(){
    int num;
    cin>>num;
    cout<<power(num);
}