#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    int cols;
    cout<<"Enter cols:";
    cin>>cols;
    int matrix [100][100];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    for(int j=0;j<cols;j++){
        if(j%2==0){
            for(int i=0;i<rows;i++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=rows-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}