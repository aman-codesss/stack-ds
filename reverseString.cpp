//reversing a string in stack tc and sc , n  n
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    string str = "aman_is_coding";
    string ans ="";
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    cout<<s.size()<<endl;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans<<endl;

}