#include <bits/stdc++.h>
using namespace std;

int main() {
    string postfix;
    stack<int> s;

    cout << "Enter postfix expression (numbers only): ";
    cin >> postfix;

    for (int i = 0; i < postfix.size(); i++) {
        char c = postfix[i];

       
        if (c >= '0' && c <= '9') {
            s.push(c - '0');  
        }
        else {
           
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

        
            if (c == '+') s.push(a + b);
            else if (c == '-') s.push(a - b);
            else if (c == '*') s.push(a * b);
            else if (c == '/') s.push(a / b);
        }
    }

 
    cout << "Result: " << s.top() << endl;

    return 0;
}
