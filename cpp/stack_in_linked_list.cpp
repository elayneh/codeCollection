#include <iostream>
using namespace std;
int main(){
    int num[] = {};
    int rear = -1, front = -1, size = 0, max_size = 4;
    while (size != max_size){

        rear++;
        int data;
        cin>>data;
        if (rear < max_size){
            num[rear] = data;
            size++;
            if (front == -1)
            front++;
        }
        else if (rear == max_size){
            rear = 0;
            num[rear] = data;
            size++;
            front++;
        }

    }
    cout<<"overflow";
    

}
