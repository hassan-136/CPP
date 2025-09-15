// #include<iostream>
// using namespace std;
// void swapping(int * a,int *b){
//     int temp= *a;
//     *a=*b;
//     *b=temp;
//     cout<<*a<<" "<<*b<<endl;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     swapping(&a,&b);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 3, cols = 4;

//     // create array of int pointers
//     int** arr = new int*[rows];

//     // allocate each row
//     for(int i=0; i<rows; i++) {
//         arr[i] = new int[cols];
//     }

//     // fill array
//     for(int i=0; i<rows; i++) {
//         for(int j=0; j<cols; j++) {
//             cin>>arr[i][j];
//         }
//     }

//     // print array
//     for(int i=0; i<rows; i++) {
//         for(int j=0; j<cols; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // delete memory
//     for(int i=0; i<rows; i++) {
//         delete[] arr[i];  // delete each row
//     }
//     delete[] arr;         // delete array of pointers
// }

#include <iostream>
using namespace std;

int main() {
    int *rows = new int;
    cin>>*rows;
    int *cols=new int;
    cin>>*cols;

    // create array of int pointers
    int** arr = new int*[*rows];

    // allocate each row
    for(int i=0; i<*rows; i++) {
        arr[i] = new int[*cols];
    }

    // fill array
    for(int i=0; i<*rows; i++) {
        for(int j=0; j<*cols; j++) {
            cin>>arr[i][j];
        }
    }

    // print array
    for(int i=0; i<*rows; i++) {
        for(int j=0; j<*cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // delete memory
    for(int i=0; i<*rows; i++) {
        delete[] arr[i];  // delete each row
    }
    delete[] arr;         // delete array of pointers
}
