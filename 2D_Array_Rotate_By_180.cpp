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

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cin>>arr[i][j];
        }
        
     }
     // column reversing

     for(int j=0;j<row;j++){
       int start=0;
       int  end=row-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++; end--;
        }
     }
     
     //row Reversing

     for(int i=0;i<col;i++){
        int start=0;
        int end = col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++; end--;
        }
     }

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
    }