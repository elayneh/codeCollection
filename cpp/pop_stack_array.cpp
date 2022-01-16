/**
 * if the stack is empty top == -1, trying to delete an element causes to stack underflow.
 * else value on top is stored on temporary variable 
 * Decreament top by 1 
 * Delete element stored on tempotary variable.
 * Return the poped value stack[temporary].
 */
#include <iostream>
using namespace std;

int pop(int stack[], int temp)
{
    int top = 0;
    if (top == -1){
        cout<<"stack underflow\n";
        return 0;
    }else{
        temp = stack[top];
        top = top - 1;
    }
    return temp;
}

int main(){
    int size, array[size];
    int container;
    cout<<pop(array, container)<<" is poped successfully\n";

    return 0;
}
