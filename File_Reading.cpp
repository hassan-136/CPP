#include<iostream>
#include<fstream>
using namespace std;
int main(){
   ifstream fin;
    fin.open("file.txt");
     char c;
   c= fin.get();
   while(!fin.eof()){
       cout<<c;
       c=fin.get();
   }
fin.close();
// int *arr = new int[1000000000000000000];
// cout<<"Yews";

}