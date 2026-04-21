#include<iostream>
#include<stack>
using namespace std;
int main(){
    string input;
    cin>> input;
     stack<char>st;
     for(int i=0; input[i]; i++){
        st.push(input[i]);
     }
     bool isBalance=1;

     for(int i=0; input[i]; i++){
        if(st.top()== input[i]){

        }
     }

    return 0;
}