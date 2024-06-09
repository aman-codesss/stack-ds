#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s, s_copy;
    s.push(10);
    s.push(30);
    s.push(50);
    s.push(70);
    
    s_copy = s;
   while(!s_copy.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
    
}