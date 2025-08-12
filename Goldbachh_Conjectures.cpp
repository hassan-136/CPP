#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
               
            }
        }
        return true;
}

void goldbach(int n){
    for(int i=2;i<=n/2;i++){
        if(prime(i)&& prime(n-i)){
            cout<<"("<<i<<","<<n-i<<")";
        }
    }
}
int main(){
    int num;
    cout<<"Enter even num >=4:";
    cin>>num;
    goldbach(num);
}