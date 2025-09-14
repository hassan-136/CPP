
#include <iostream>
using namespace std;
int main () {

// int *count = new int;
// cin>>*count;

// int *arr = new int[*count];
// for(int i=0; i<*count; i++){
//     cin>>arr[i];
// }
// for(int i=0; i<*count; i++){
//     cout<<arr[i]<<" ";
// }
// delete [] arr;
// delete count;
// return 0;

 int* ptr = new int;
 *ptr = 8;
 int* ptr2 = new int;
 *ptr2 = -5;
 ptr = ptr2;     
 
// delete ptr2;    // ptr is left dangling
 //ptr2 = NULL;   
 cout<<*ptr2;  // undefined behavior 
}