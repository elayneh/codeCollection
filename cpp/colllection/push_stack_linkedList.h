/**
 * The following operations are involved in linked list implementation of stack.
 * create a node firt and allocate memmoty to it.
 * if the list is empty then the item is to be pushed as the start node of the list
 *          assign value to the data part of the node and assign null to the address part of the node.
 * if there are some nodes in the list already, add the new element in the beginning of the starting elements to the address field
 *          of the new node and make the new node, the starting node of the list.
 */

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
node *top = NULL;
void push(int val){
    node* new_node = new node();
    new_node->data = val;
    new_node->next = top;
    top = new_node;
}
