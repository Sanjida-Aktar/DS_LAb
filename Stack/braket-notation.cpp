
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;   // user will input the sequence

    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                cout << "Not Balanced";
                return 0;
            }

            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[')) {
                cout << "Not Balanced";
                return 0;
            }

            st.pop();
        }
    }

    if (st.empty())
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}