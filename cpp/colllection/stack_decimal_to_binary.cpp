#include <iostream>
#include <cmath>
#include "main.h"
using namespace std;
int temp;
string bHolder="";
void converter(int number){
    temp = number;
    while(number != 0){
        number = floor(number);
        int val = number%2;
        push(abs(val));
        number = number/2;
    }
}
void display(){
    while(top >= 0){
        cout<<stack[top]<<" ";
        top--;
        bHolder+=to_string(stack[top]);
    }
}
int main(){
    int num;
    cout<<"inter the number to be converted\n";
    cin>>num;
    converter(num);
    cout<<temp<<" = ";
    display();

    return 0;
}

