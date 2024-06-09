#include<iostream>
using namespace std;
class Stack{
    private:
    int size;
    int* arr;
    int top;

    public:
    Stack(int size){
        this->size= size;
        top = - 1;
        this->arr = new int[size];
    }
    void push(int value){
        if(top>=size-1){
            cout<<"Stack overflown"<<endl;
        }
        else{
            arr[++top]=value;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflown"<<endl;
        }
    }
};
int main(){
    Stack s(5);

    s.push(4);
    cout<<s.peek()<<endl;
    s.push(5);
    cout<<s.peek()<<endl;
    s.push(6);
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.peek();

    
}