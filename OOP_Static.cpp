#include<iostream>
using namespace std;
class Customer{
    
    string name;
    public:
    static int count;
    Customer(string name){
        this ->name =name;
        count+=1;
    }
};
int Customer::count = 0;
int main(){
    Customer c1 ("Hassan");
    Customer c2 ("Ali");
    cout<<"Total Customers: "<<Customer::count<<endl;
}