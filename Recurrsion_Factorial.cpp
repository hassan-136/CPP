#include<iostream>
using namespace std;
int  fact(int num){
    if(num==1)
{
    return 1;
}    int factorial;
    factorial=num* fact(num-1);
    return factorial;
}
int main(){
    cout<<"Enter num:";
    int num;
    cin>>num;
   cout<< fact(num);
}