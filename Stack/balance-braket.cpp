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
        else{
            if(st.empty()){
                cout<<"Not Balanced";
                return 0;
            }
            if(s[i]==')' && st.top()=='(' ||
             s[i]=='}' && st.top()=='{'||
             s[i]==']' && st.top()=='['){
                st.pop();
             }
             else{
                cout<<"Not Balanced";
                return 0;
             }
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