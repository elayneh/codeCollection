#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node *start;

void display(){
    node* temp = start;
    while(temp != NULL){
        cout<<temp->data<<"--> ";
        temp = temp->next;
    }
    cout<<"end of the list.\n";
}

void beg(){
    node *new_node = new node;
    int value;
    cout<<"inter the node data\n";
    cin>>value;
    if (start == NULL){
        start = new_node;
        new_node->data = value;
    }
    else{
        new_node->next = start;
        start = new_node;
        new_node->data = value;
    }
        cout<<value<<" inserted at the beggning\n";
}
void after(){
    node *new_node = new node;
    node* temp = start;
    int value, loc;
    cout<<"at which location does the node inserted:\n";
    cin>>loc;
    cout<<"inter the node data\n";
    cin>>value;
    for(int i = 1; i < loc - 1; i++){
        temp = temp->next; 
        if(temp == NULL)
            cout<<"unavailable location\n";
        else{
            new_node->next = temp->next;
            temp->next = new_node;
            new_node->data = value;
        }
    
    cout<<value<<" inserted at the "<<loc<<"th \n";
}
}
void end(){
    node *new_node = new node;
    node* temp = start;
    int value;
    cout<<"inter the node data\n";
    cin>>value;
    if(temp == NULL){
        start = new_node;
        new_node->data = value;
    }
    else{
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->data = value; 
    }   
    cout<<value<<" inserted at the end. \n";

}
void insert(){

    choose:
    cout<<"\t\tmenu\n\t\t----\n";
    cout<<"   select where u wanna to add a node: \n";
    cout<<" 1.    beg\n 2.    after a node\n 3.\
    end\n 4.    display\n 5.    exit\n";
    char choice;
    cin>>choice;
    switch(choice){
        case '1':
        beg();
        break;
        case '2':
        after();
        break;
        case '3':
        end();
        break;
        case '4':
        display();
        break;
        case '5':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }
    }
void del_beg(){
    node* temp = start;
    start = temp->next;
    if (temp == NULL){
        cout<<"there is no list to be deleted.\n";
    }
    else{
    delete temp;
    cout<<"the first node is deleted.\n";
    }
}

void del_at(){
    node *temp=start;
    int loc, i=1;
    cin>>loc;

   for(;i<loc; i++)
    {
        temp=temp->next;
        if(temp==NULL)
        cout<<"\n Node not found\n";        
    }
    if(i==loc)
    {
       node *p=temp->next; //node to be deleted                       
       temp->next=p->next;//disconnecting the node p
       delete p;
       cout<<"Deleted Successfully";
    }
    }

void del_end(){
    if (start == NULL){
        cout<<"list is empty.\n";
    }
    else{
        node *temp = start;
        while (temp->next->next != NULL)
             temp = temp->next;
        node *temp2 = temp->next;
        temp->next = NULL;
        delete temp2;
        cout<<"node is deleted successfully.\n";
        }
    

}

void del(){

    choose:
    cout<<"\t\tmenu\n\t\t----\n";
    cout<<"   select from where u wanna to delete a node: \n";
    cout<<" 1.    beg\n 2.    after a node\n 3.\
    end\n 4.    display\n 5.    exit\n";
    char choice;
    cin>>choice;
    switch(choice){
        case '1':
        del_beg();
        break;
        case '2':
        del_at();
        break;
        case '3':
        del_end();
        break;
        case '4':
        display();
        break;
        case '5':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }
}

void singl(){

    choose:cout<<"\t\tmenu\n\t\t----\n";
    cout<<" select what u to do on the SSL: \n";
    cout<<"1. insert\n2. delete\n3. display\n\n";
    char choice;
    cin>>choice;
    switch(choice){
        case '1':
        insert();
        break;
        case '2':
        del();
        break;
        case '3':
        display();
        break;
        case '4':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }
        goto choose;

}

void doubl(){

    choose:cout<<"\t\tmenu\n\t\t----\n";
    cout<<" select what u to do on the DDL: \n";
    cout<<"1. insert\n2. delete\n3. display\n4. exit\n\n";
    char choice;
    cin>>choice;
    switch(choice){
        case '1':
        dinsert();
        break;
        case '2':
        ddel();
        break;
        case '3':
        display();
        break;
        case '4':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }

}
void circular(){

}
int main(){

choose:
    cout<<"\t\tMENU\n\t\t----\n";
    cout<<"     select what u wanna: \n";
    cout<<" 1.    single linked list\n 2.    double linked list\n 3.\
    circular linked list\n 4.    exit\n";
    char choice;
    cin>>choice;
    switch(choice){
        case '1':
        singl();
        break;
        case '2':
        doubl();
        break;
        case '3':
        circular();
        break;
        case '4':
        exit(0);
        break;
        default:
        cout<<"invalid input.\n";
    }
        goto choose;





    cout<<"test pass!!\n";
    return 0;
}
