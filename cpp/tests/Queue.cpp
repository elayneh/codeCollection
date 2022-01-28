#include <iostream>
using namespace std;
const int Qsize = 10;
int Q[Qsize]{}, size_elements, front = -1, rear = - 1;

int Enqueue(int value){
    if (size_elements < Qsize){
        rear++;
        if (front == -1)
        front++;
        if (rear == Qsize){
            rear = 0;
        }
        Q[rear] = value;
        size_elements++;
        cout<<value<<" is enqueued successfully!!\n";
    }
    else{
        cout<<"Overflow\n";
    }

    return Q[rear];
}

int Dequeue(){
    int temp;
    if (size_elements > 0){
        temp = Q[front];
        front++;
        size_elements--;
        cout<<Q[front]<<" is Dequeued successfully!!\n";
    }
    else{
        cout<<"Underflow\n";
    }
    return temp;
}

int Queue(){
    char choice;
    choose:
    cout<<"    1. Enqueue\n    2. Dequeue\n    0. exit\n\nEnter what you want to do: \n";
    cin>>choice;
    switch(choice){
        case '1':
        int data;
        cout<<"Enter the data value you want to Enqueue\n";
        cin>>data;
        Enqueue(data);
        break;
        case '2':
        Dequeue();
        break;
        case '0':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }
    goto choose;
}

int main(){

Queue();

    cout<<"belayneh passed!!\n";
    return 0;
}
