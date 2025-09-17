// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows:";
//     cin>>n;
//     int m;
//     ;cout<<"Enter cols:";
//     cin>>m;
//     int ** ptr = new int *[n];
//     for(int i=0;i<n;i++){
//         ptr[i]= new int [m];
//     }
//     for(int i=0;i<n ;i++){
//         for(int j=0;j<m;j++){
//             cin>>ptr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<n ;i++){
//         for(int j=0;j<m;j++){
//             cout<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         delete []ptr[i];
//     }
//     delete []ptr;
// }

#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;
    int **arr = new int*[rows];
    for(int i=0;i<rows;i++){
        arr[i]= new int [cols];
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j];
        }
    }
}