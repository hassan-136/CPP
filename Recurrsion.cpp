#include<iostream>
using namespace std;
void GCD(int a, int b){
    if(b==0){
        cout<<a;
        return ;
    }
    GCD (b, a%b);
}
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    // int temp;
    // while(num2!=0){
    //     temp = num2;
    //     num2= num1% num2;
    //     num1= temp;
    // }

    cout<<"GCD is:";GCD(num1,num2);

    // cout<<"GCD is:"<<num1;
}