#include <iostream>
#include <cmath>
using namespace std;
const int sCapacity = 10;

char stack[sCapacity];
int top = -1;
void push(float value){
    if (top >= sCapacity - 1){
        cout<<"Stack overflow\n";
        exit(0);
    }
    else{
        top++;
        stack[top] = value;
    }
}
float pop(){
    float temp;
    if (top < 0){
        cout<<"stack underflow\n";
        exit(0);
    }
    else{
        temp = stack[top];
        top = top-1;
        return temp;
    }
    return stack[top];
}

