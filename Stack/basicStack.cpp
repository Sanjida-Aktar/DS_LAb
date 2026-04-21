#include<iostream>
#include<stack>
using namespace std;
int main(){
     stack<char>st;

     st.push('A');
     st.push('B');
     st.push('C');

     while(st.empty()==0){
     cout<< st.top()<<endl;
     st.pop();
     }
    return 0;
}