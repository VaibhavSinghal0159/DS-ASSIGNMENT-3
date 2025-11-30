#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 5;
    int stack[5] = {5, 10, 15};
    int top = 2;

    if (top == -1) {
        cout << "Stack is empty";
    } else {
        cout << "Top element: " << stack[top] << endl;
    }

    return 0;
}

