/**
 * deleting a node from the top of stack is refered to as pop operation.
 * pop operation is involved the following steps.
 * check the underflow condition(try to pop element from empty stack)
 * the stack will be empty if the head pointer if the list points to null(top ==NULL).
 * Adjust the head pointer accordingly,the value stored in the head pointer must be deleted and the node must be freed.
 *          the next node of the head node now becomes the head node.
 * the time complexity is O(n).
 */
#include <iostream>
using namespace std;
struct node {
   int data;
   node *next;
};
node* top = NULL;

void pop(){
    node* new_node = new node();
    if (top == NULL){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<"The popped elements is "<<top->data<<endl;
        top = top->next;
    }
}
