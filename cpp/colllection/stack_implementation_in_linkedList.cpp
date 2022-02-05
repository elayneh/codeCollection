#include <iostream>
using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* top = NULL;
void push(int value) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = top;
    top = new_node;
}
void pop() {
    if (top == NULL)
        cout << "Stack Underflow" << endl;
    else {
        cout << "The popped element is " << top->data << endl;
        top = top->next;
    }
}
void display() {
    struct node* ptr;
    if (top == NULL)
        cout << "stack is empty";
    else {
        ptr = top;
        cout << "Stack elements are: ";
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}
int main() {
    int input, value;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do {
        cout << "Enter choice: " << endl;
        cin >> input;
        switch (input) {
        case 1: {
            cout << "Enter valueue to be pushed:" << endl;
            cin >> value;
            push(value);
            break;
        }
        case 2: {
            pop();
            break;
        }
        case 3: {
            display();
            break;
        }
        case 4: {
            cout << "Exit" << endl;
            break;
        }
        default: {
            cout << "Invalueid inputoice" << endl;
        }
        }
    } while (input != 4);
    return 0;
}
