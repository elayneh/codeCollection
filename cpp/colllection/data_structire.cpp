#include <iostream>
using namespace std;

struct node
{
    int data = 60;
    node *next;
};
node *head;
node *temp = head;

void insert(int value)
{
    node *new_node = new node();
    if (temp == NULL)
    {
        head = new_node;
        cout << "insert the item you want to add: ";
        cin >> value;
        new_node->data = value;
        new_node->next = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        cout << "inter the item you want to add: ";
        cin >> value;
        new_node->data = value;
        new_node->next = NULL;
    }
}
void display()
{
    node *temp = head;
    if (temp == NULL)
    {
        cout << "item not found";
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp->next=temp;
        }
        cout << "\nall the items are displayed.";
    }
}

int main()
{
    head = NULL;
    int i, n, val;
    cout << "how many items u want to insert: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        insert(val);
    }
    display();

    cout << endl;
    return 0;
}
