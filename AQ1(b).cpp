#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 5;
    int stack[5] = {10, 20, 30};
    int top = 2; 

    if (top == -1) {
        cout << "Stack is empty";
    } else {
        cout << "Popped element: " << stack[top] << endl;
        top = top - 1;
    }

    return 0;
}
