 #include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter rows:";
    cin>>row;
    int col;
    cout<<"Enter columns:";
    cin>>col;
    int arr[100][100];
int matrix[4][4];
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cin>>arr[i][j];
        }
        
     }
    // cout<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //       matrix[j][col-i-1]=arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //      cout<< matrix[i][j];
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        int start=0;int end=col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }



}