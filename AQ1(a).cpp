#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 5;
    int stack[5];
    int top = -1;

    int val;
    cout << "Enter value to push: ";
    cin >> val;

    if (top == size - 1) {
        cout << "Stack is full";
    } else {
        top = top + 1;
        stack[top] = val;
        cout << val << " pushed into stack";
    }

    return 0;
}
