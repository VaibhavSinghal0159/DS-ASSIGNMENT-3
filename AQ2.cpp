#include <bits/stdc++.h>
using namespace std;

int main() {
    char stack[100];
    int top = -1;

    string str;
    cout << "Enter a string: ";
    cin >> str;

    
    for (int i = 0; i < str.length(); i++) {
        top = top + 1;
        stack[top] = str[i];
    }

    
    cout << "Reversed string: ";
    while (top != -1) {
        cout << stack[top];
        top = top - 1;
    }

    cout << endl;
    return 0;
}
