/**
 * Pushing operation involves following two steps.
 * Increament top so that it can now refere to the next memory location
 * Add elements at the increamented position (current top) 
 * Stack is overflown when we try to insert an element into a completely filled stack therefore, main function
 * must always avoid stack overflow condition.
 * The time complexity for push operation is O(1).
 */
#include <iostream>
using namespace std;

void push(int stack[], int val, int n)//n is size of stack
{
    int top = 0;
    if (top == n){
        cout<<"stack overflow\n";
        exit(0);
    }else{
        top = top + 1;
        stack[top] = val;
        cout<<stack[top]<<"\n";
    }
}

int main(){
    int size, array[size];
    push(array, 10, size);

}
