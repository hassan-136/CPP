#include <iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;
    public:
    Stack(int size){
        this->size= size;
        arr= new int [ size];
        top=-1;
    }

    void push(int value){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=value;
    }
    
    
        void pop(){
            if(top==-1){
                cout<<"Stack Underflow"<<endl;
                return;
            }
            top--;
        }
    
        int peek(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }
    
        bool isEmpty(){
            return top==-1;
        }
    
        ~Stack(){
            delete[] arr;
        }
};
int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element is: " << s.peek() << endl; // Should print 30
    
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl; // Should print 20
    
    s.pop();
    s.pop();
    
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Should print Yes
    
    return 0;

}