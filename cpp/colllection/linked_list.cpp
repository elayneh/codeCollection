#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
class linked_list {
private:
    node* head;
public:
    linked_list() {
        head = NULL;
    }
   void push_back(int newElement) {
      node* newnode = new node();
      newnode->data = newElement;
      newnode->next = NULL; 
      if(head == NULL) {
        head = newnode;
      } else {
        node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newnode;
      }    
    }
    void print() {
        node* temp = head;
        if (temp != NULL) {
            cout << "list is not empty and the elements will be: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else {
            cout << "the list is empty.\n";
        }
    }

};

int main() {
    linked_list list;
    list.push_back(34);
    list.push_back(45);
    list.push_back(23);
    list.push_back(53);
    list.push_back(80);
    list.push_back(57);
    list.print();

    return 0;
}
