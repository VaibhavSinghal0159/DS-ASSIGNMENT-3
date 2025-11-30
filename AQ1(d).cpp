#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 5;
    int stack[5] = {7, 8, 9};
    int top = 2;

    if (top == -1) {
        cout << "Stack is empty";
    } else {
        cout << "Stack contents: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

