#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>& s, int x) {
    //base case
    if(s.empty()) {
        s.push(x);
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    solve(s, x);
    
    s.push(num);
}


stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
int main(){
    stack<int> s;
    s.push(10);
    s.top();
    s.push(20);
    s.top();
    s.push(30);
    s.top();
    s.push(40);
    s.top();
    solve(s,9);
}