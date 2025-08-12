 #include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter rows:";
    cin>>row;
    int col;
    cout<<"Enter columns:";
    cin>>col;
    int arr[3][4];

    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
   
}
    for(int i=0;i<row;i++){
        int start =0;
        int end=col-1;
        while(start<end){

            swap(arr[i][start],arr[i][end]);
            start++;
            end--;

        }
}
cout<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}