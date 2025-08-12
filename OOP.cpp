#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno,age;
    string address;
};
int main(){
    Student s1;
    cin>>s1.name;
   cout<<s1.name<<endl;
    s1.rollno = 101;
    s1.age = 20;
    s1.address = "123 Main St";
    cout<<sizeof(s1)<<endl;
    return 0;
}