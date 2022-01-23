#include <iostream>
using namespace std;

struct ptop
{
    int data;
    ptop *next_ptr;
    ptop *prev_ptr;
};
class stack
{
    ptop *head = NULL;

public:
    ptop *temp = head;

    struct ptop
    {
        int data;
        ptop *next;
    };
    public:
        stack()
        {
            head = NULL;
        }
        //this method implemets to add a new element
        void push_front(int newElement)
        {
            ptop *newptop = new ptop();
            newptop->data = newElement;
            head = newptop;
        }
        void print_top()
        {
            if (temp != NULL)
            {
                while (temp->next_ptr != NULL)
                {
                    temp = temp->next_ptr;
                    temp->next_ptr->prev_ptr = temp;
                }
                delete temp;
                temp->prev_ptr->next_ptr = NULL;
            }
        }
    };

    int main()
    {

        stack *stacks = new stack();
        stacks->print_top();

        return 0;
    }
