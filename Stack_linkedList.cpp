#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        next = NULL;
    }
};

class Stack{
    public:
    Node * top;
    int size;
    Stack(){
        top = NULL;
        size=0;
    }
    void push(int value){
        Node * temp = new Node(value);
        temp->next = top;
        top=temp;
        size++;
    }
    void pop(){
        if(top == NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node * temp = top;
        top = top->next;
        delete temp;
        size--;
    }
    int peek(){
        if(top == NULL){
            cout<<"Stack is empty"<<endl;
            return -1; // or throw an exception
        }
        return top->data;
    }
    bool isEmpty(){
        return top == NULL;
    }
    int getSize() {
        return size;
    }
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element is: " << s.peek() << endl; // Should print 30
    
    s.pop();
    cout << "Top element after pop is: " << s.peek() << endl; // Should print 20
    
    s.pop();
    cout << "Stack size after two pops: " << s.getSize() << endl; // Should print 1
    
    return 0;
}