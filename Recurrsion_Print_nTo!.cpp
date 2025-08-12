#include<iostream>
using namespace std;
void print(int num){
    if(num==1){
        cout<<1<<endl;
        return ;
    }
    print(num-1);
    cout<<num<<endl;
   // print(num-1);
}
int main(){
int num;
cout<<"Enter num:";
cin>>num;
print(num);
}