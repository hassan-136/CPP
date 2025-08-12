#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<"Enter size:";
    int size;

    int element;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>element;
        st.push(element);

        }
        int x;
        cout<<"Enter x:";
        cin>>x;
        stack<int > temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
}