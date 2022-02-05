/**
 * this is all about the tree implementation in doubly linked list.
 */
#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node node_num;
Node *rootptr = NULL;
void reader();
void insertBST(int data);
void inorder(Node *rootptr);
void preorder(Node *rootptr);
void postorder(Node *rootptr);
int search_tree(Node *n, int key);
int findMin(Node *rootptr);
int findmax(Node *rootptr);
int height(Node *rootptr);
Node *minValueNode(Node *rootptr);
Node *deleteNode(Node *RootNodePtr, int data);

int main()
{
L:
    cout << "\n Binary search tree using Doubly Linked List\n";
    cout << "1    Insert\n";
    cout << "2    Delete\n";
    cout << "3    search\n";
    cout << "4    Preorder Traversing\n";
    cout << "5    Inorder Traversing\n";
    cout << "6    Postorder Traversing\n";
    cout << "7    min value\n";
    cout << "8    max value\n";
    cout << "9    Height of tree\n";
    cout << "             choice:";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {

        reader();
        int input = search_tree(rootptr, node_num.data);
        if (input == 0)
        {
            insertBST(node_num.data);
            cout << "The values in the tree are(Inorder Traversing): ";
            inorder(rootptr);
        }
        else
            cout << "\nduplicated values so please change the value" << endl;
        goto L;
        break;
    }
    case 2:
    {
        cout << "please enter the data you want to delete:";
        int del;
        cin >> del;
        Node *rec = deleteNode(rootptr, del);
        rec = NULL;
        cout << "The values in the tree are: ";
        inorder(rootptr);
        goto L;
        break;
    }
    case 3:
    {
        cout << "\nplease enter the value you want to search:";
        int s;
        cin >> s;
        int input = search_tree(rootptr, s);
        if (input == 0)
        {
            cout << "Not found ";
        }
        else
            cout << "\nThe values found in the tree:" << input << endl;
        goto L;
        break;
    }
    case 4:
    {

        if (rootptr == NULL)
        {
            cout << "There is no data in the tree";
        }
        else
        {
            cout << "\nThe values in the tree are: ";
            preorder(rootptr);
        }
        goto L;
        break;
    }
    case 5:
    {

        if (rootptr == NULL)
        {
            cout << "There is no data in the tree";
        }
        else
        {
            cout << "\nThe values in the tree are: ";
            inorder(rootptr);
        }
        goto L;
        break;
    }
    case 6:
    {
        if (rootptr == NULL)
        {
            cout << "There is no data in the tree";
        }
        else
        {
            cout << "\nThe values in the tree are: ";
            postorder(rootptr);
        }
        goto L;
        break;
    }
    case 7:
    {
        int a = findMin(rootptr);

        if (a == -1)
        {
            cout << "The tree is empty";
        }
        else
        {
            cout << "\nThe minimum value in the tree is: " << a;
        }
        goto L;
        break;
    }
    case 8:
    {
        int a = findmax(rootptr);

        if (a == -1)
        {
            cout << "The tree is empty";
        }
        else
        {
            cout << "\nThe maximum value in the tree is: " << a;
        }
        goto L;
        break;
    }

    case 9:
    {
        cout << "\nThe height of the tree is: " << height(rootptr);
        goto L;
        break;
    }
    }
}
void reader()
{
    cout << "please enter the data:";
    cin >> node_num.data;
}
void insertBST(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    Node *temp;
    temp = rootptr;
    int inserted = 0;
    if (temp == NULL)
    {
        rootptr = new_node;
    }
    else
    {
        while (inserted == 0)
        {
            if (temp->data > new_node->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = new_node;
                    inserted = 1;
                }
                else
                    temp = temp->left;
            }

            else
            {
                if (temp->right == NULL)
                {
                    temp->right = new_node;
                    inserted = 1;
                }
                else
                    temp = temp->right;
            }
        }
    }
}

void inorder(Node *rootptr)
{

    if (rootptr != NULL)
    {
        inorder(rootptr->left);
        cout << rootptr->data << ",";
        inorder(rootptr->right);
    }
}
void preorder(Node *rootptr)
{
    if (rootptr != NULL)
    {
        cout << rootptr->data << ",";
        preorder(rootptr->left);
        preorder(rootptr->right);
    }
}
void postorder(Node *rootptr)
{

    if (rootptr != NULL)
    {
        postorder(rootptr->left);
        postorder(rootptr->right);
        cout << rootptr->data << ",";
    }
}

int search_tree(Node *n, int key)
{
    int c = 0;
    while (n != NULL)
    {
        if (n->data == key)
        {
            c++;
            return key;
        }
        if (n->data > key)
            n = n->left;
        else
            n = n->right;
    }
    return c;deleteNode;
}
int findMin(Node *rootptr)
{
    if (rootptr == NULL)
        return -1;
    else if (rootptr->left == NULL)
        return rootptr->data;
    else
        return findMin(rootptr->left);
}
int findmax(Node *rootptr)
{
    if (rootptr == NULL)
        return -1;
    else if (rootptr->right == NULL)
        return rootptr->data;
    else
        return findmax(rootptr->right);
}
    int h = 0;
int height(Node *rootptr)
{
    if (rootptr != NULL)
    {
        int lHeight = height(rootptr->left);
        int rHeight = height(rootptr->right);
        int maxHeight = max(lHeight, rHeight);
        h = maxHeight + 1;
    }
    return h;
}

Node *minValueNode(Node *rootptr)
{
    Node *current = rootptr;
    while (current->left != NULL)
        current = current->left;
    return current;
}
Node *deleteNode(Node *RootNodePtr, int data)
{
    if (RootNodePtr == NULL)
        return RootNodePtr;
    else if (data < RootNodePtr->data)
        RootNodePtr->left = deleteNode(RootNodePtr->left, data);
    else if (data > RootNodePtr->data)
        RootNodePtr->right = deleteNode(RootNodePtr->right, data);
    else
    {
        if (RootNodePtr->left == NULL && RootNodePtr->right == NULL)
        {
            delete RootNodePtr;
            RootNodePtr = NULL;
        }
        else if (RootNodePtr->left == NULL)
        {
            Node *temp = RootNodePtr;
            RootNodePtr = RootNodePtr->right;
            delete temp;
        }
        else if (RootNodePtr->right == NULL)
        {
            Node *temp = RootNodePtr;
            RootNodePtr = RootNodePtr->left;
            delete temp;
        }
        else
        {
            Node *temp = minValueNode(RootNodePtr->right);
            RootNodePtr->data = temp->data;
            RootNodePtr->right = deleteNode(RootNodePtr->right, temp->data);
        }
    }
    return RootNodePtr;
}
