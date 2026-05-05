#include<iostream>
#include<stack>
using namespace std;
int main(){
     string s;
     cin>>s;
     stack<char>st;

     for(int i=0; i<s.length(); i++){
        if(s[i]=='('|| s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')' && !st.empty() && st.top()=='('){
            st.pop();
        }
        else if(s[i]=='}' && !st.empty() && st.top()=='{'){
            st.pop();
        }
        else if(s[i]==']' && !st.empty() && st.top()=='['){
            st.pop();
        }
        else if(s[i]==')'|| s[i]=='}' || s[i]==']'){
            st.push(s[i]);
        }
     }
     if(st.empty()){
        cout<<"Balenced";
     }
     else {
        cout<<"Not Balenced";
     }
    return 0;
}