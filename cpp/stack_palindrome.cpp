#include <iostream>
using namespace std;
int stack[5], n = 20, top = -1, temp_stack1[5], temp_stack0[5], i = 0, j = 0;
void push(int val) {
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else {
        top++;
        stack[top] = val;
        temp_stack0[i] = stack[top];
        i++;
    }
}
void pop() {
    int tester = 0;
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else {
        cout << "The popped element is " << stack[top] << endl;
        temp_stack1[j] = stack[top];
        j++;
        tester++;
    }
}
string isPalindrome() {
    int iterator = 0;
    bool is_pal = false;
    string status="";
    for (int iterator = 0; iterator < n; iterator++){
        if (temp_stack0[iterator] == temp_stack1[iterator]) {
            is_pal = true;
        }
        else {
            is_pal = false;
        }  
        
    }
    if (is_pal == false) {
        status = "it is not palindrome";
    }
    else {
        status = "it is palindrome";
    }
    return status;
}
void display() {
   if(top>=0) {
      cout<<"Stack contains:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
   cout<<endl;
}

int main() {
    int count = 0;

    for (; count < n; count++) {
        push(count);
    }
    while (count < 1) {
        pop();
        count--;
    }
    cout<< isPalindrome();
    cout<<endl;
    display();

    return 0;
}
