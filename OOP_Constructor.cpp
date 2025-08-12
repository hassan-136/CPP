#include<iostream>
using namespace std;
class Customer{
   
    public :
     string name;
 int age, account_number;
   Customer(){
          cout<<"Hello ";
        }  
    Customer(string name,int age ,int account_number){
        this->name = name;
        this->age = age;
        this->account_number = account_number;    
      
    }
    ~Customer(){
        cout<<"Destructor called"<<endl;
    }   
};
int main(){

    Customer c; // Default constructor will be called
    Customer c1("Shubham",20,12345);
    cout<<c1.name<<" "<<c1.age<<" "<<c1.account_number;
    Customer c2(c1);
    cout<<c2.name<<" "<<c2.age<<" "<<c2.account_number;
}