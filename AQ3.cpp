#include <bits/stdc++.h>
using namespace std;

bool Balanced(string st) {
    stack<char> s;
    for (int i = 0; i < st.length(); i++) {
        char ch = st[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    if (s.empty()) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string st;
    cout << "Enter expression: ";
    cin >> st;
    if (Balanced(st)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}
