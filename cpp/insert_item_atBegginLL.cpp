#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class linked_list{
    private:
    node *head;
    public:
    linked_list(){
        head = NULL;
    }
//this method implemets to add a new element
    void push_front(int newElement){
        node *newNode = new node();
        newNode->data = newElement;
        head = newNode;
    }
//this method is implemented to display the list elements
    void printList(){
        node *temp = head;
            while (temp != NULL){
                cout<<temp->data<< " ";
                temp = temp->next;
            }

    }
};

int main(){

linked_list list;
list.push_front(89);
list.push_front(12);
list.printList();
/**
 * the number of calling the printList method depends
 * up on the number of elements that we want to add
 */


    return 0;
}

