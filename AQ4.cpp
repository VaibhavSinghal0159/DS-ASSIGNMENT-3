#include <bits/stdc++.h>
using namespace std;

int main() {
    string infix, postfix = "";
    stack<char> st;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.size(); i++) {
        char c = infix[i];

     
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix += c;
        }
      
        else if (c == '(') {
            st.push(c);
        }
    

        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); 
        }
      

        else {
            
            while (!st.empty() && (
                (st.top() == '*' || st.top() == '/') || 
                (st.top() == '+' || st.top() == '-') && (c == '+' || c == '-')
                )) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

   
    
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix: " << postfix << endl;

    return 0;
}
