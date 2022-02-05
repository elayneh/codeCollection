#include <iostream>
using namespace std;

struct node
{
    int data;
    node *prev, *next;
};
class linked_list
{
public:
    node *head;
    linked_list()
    {
        head = NULL;
    }

public:
    void insert_in(int item)
    {
        node *new_node = new node();
        new_node->data = item;
        if (head == NULL)
        {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        }
        else
        {
            new_node->next = head;
            new_node->prev = NULL;
            head = new_node;
        }
    }
    void print_list()
    {
        if (head == NULL)
        {
            cout << "the list is empty\n";
        }
        else
        {
            node *temp = head;
            int counter = 0;
            while (temp != NULL)
            {
                cout << "value at position " << counter << " is " << temp->data << endl;
                temp = temp->next;
                counter++;
            }
        }
    }
    void insert_specified()
    {
        node *container = new node();
        if (container == NULL)
        {
            cout << "\nOverflow\n";
        }
        else
        {
            node *temp = head;
            int loc, item;
            cout << "inter the position:\n";
            cin >> loc;
            for (size_t i = 0; i < loc; i++)
            {
                temp = temp->next;
                if (temp == NULL)
                {
                    cout << "there is no such a number of lists.\n";
                }
            }
            cout << "enter the value to ensert:\n";
            cin >> item;
            container->data = item;
            container->next = temp->next;
            container->prev = temp;
            temp->next = container;
        }
    }
        void delete_specified()
        {
                node *temp = head, *empty;
            if (temp != NULL)
            {
                int loc;
                cout << "insert the delete location:\n";
                cin >> loc;
                for (int i = 1; i <= loc; i++)
                {
                    if(temp == NULL){
                        cout<<"item is not found at location "<<loc<<endl;
                        return;
                    }
                    temp = temp->next;
                }
                delete temp;
                temp->next->prev = temp->prev;
                temp->prev->next = temp->next;

            }
            else{
                cout<<"no item to be deleted.\n";
            }
        }
    
};

int main()
{
    linked_list list;
    for (size_t i = 0; i < 5; i++)
        {
        list.insert_in(100 + i);
        }
        list.insert_specified();
        list.print_list();
        list.delete_specified();
        list.print_list();

    cout << endl;
    return 0;
}
