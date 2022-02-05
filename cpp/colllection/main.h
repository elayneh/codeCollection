#include <iostream>
using namespace std;
const int sCapacity = 8;

int stack[sCapacity], top = -1;
struct node{
    int data;
    node* next;
};
node *new_node = new node();
node* head = NULL;
void push(int value){
    if(top < 0){
        top++;
        stack[top] = value;
    }else if (top >= sCapacity - 1){
        cout<<"Stack overflow\n";
        exit(0);
    }else{
        top++;
        stack[top] = value;
    }
}
void pop(){
    if (top < 0){
        cout<<"stack underflow\n";
        exit(0);
    }
    else{
        top = top-1;
    }
}
int seek(){
    int container[]{};
    if(top < 0){
        cout<<"Stack is empty\n";
    }
    else{
        while(top >= 0){
            container[top] = stack[top];
            top=top-1;
        }
    }
    return container[top];
}
