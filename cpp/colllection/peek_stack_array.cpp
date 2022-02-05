/**
 * Peek operation is returning elements which is present at the top of the stack(no deleting).
 * Underflow occured if we try to peek empty stack(top == -1).
 */

#include <iostream>
using namespace std;
int peek(int stack[], int temp, int top) {
    if (top <= -1) {
        cout << "underflow";
        return 0;
    }
    else {
        temp = stack[top];
        top--;
        return temp;
    }
}

int main() {
    int array[] = {}, top = 3, temp;
    while (top >= -1) {
        cout << peek(array, temp, top) << "\n";
        top--;
    }

    return 0;
}
