#include <iostream>

using namespace std;

struct student
{
    string stud_Name;
    string stud_Id;
    int stud_age;
    string stud_depart;
    struct student *next;
};
student stud;
student *head = NULL;
void take();
void insert_end(string stud_Name, string stud_Id, int stud_age, string stud_depart);
void insert_front(string stud_Name, string stud_Id, int stud_age, string stud_depart);
void insert_right(string stud_Name, string stud_Id, int stud_age, string stud_depart, string stud_Id_search);
void delete_front();
void delete_end();
void delete_middle(string stud_id_delete);
void search_node(string stud_id_search);
void display();

int main()
{
    int amount_stud;
    cout << "please enter the amount of students you want to regester:" << endl;
    cin >> amount_stud;

    cout << "\nLinked List\n";
L:
    cout << "1,ADD\n";
    cout << "2,ADD(front)\n";
    cout << "3,ADD(middle)\n";

    cout << "4,DELETE(end)\n";
    cout << "5,DELETE(front)\n";
    cout << "6,DELETE(middle)\n";
    cout << "7,search from the list\n";
    cout << "choice:";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        for (int i = 0; i < amount_stud; i++)
        {
            take();
            insert_end(stud.stud_Name, stud.stud_Id, stud.stud_age, stud.stud_depart);
        }
        display();
        goto L;
    }
    case 2:
    {

        take();
        insert_front(stud.stud_Name, stud.stud_Id, stud.stud_age, stud.stud_depart);
        display();
        goto L;
    }
    case 3:
    {
        cout << "id no you want to enter after:";
        string stud_Id_search;
        cin >> stud_Id_search;
        cout << endl;
        take();
        insert_right(stud.stud_Name, stud.stud_Id, stud.stud_age, stud.stud_depart, stud_Id_search);
        display();
        goto L;
    }
    case 4:
    {
        delete_end();
        display();
        goto L;
    }
    case 5:
    {
        delete_front();
        display();
        goto L;
    }
    case 6:
    {
        cout << "enter id no you want to delele:";
        string stud_id_delete;
        cin >> stud_id_delete;
        delete_middle(stud_id_delete);
        display();
        goto L;
    }
    case 7:
    {
        cout << "enter id no you want to search:";
        string stud_id_search;
        cin >> stud_id_search;
        search_node(stud_id_search);
        goto L;
    }
    }
}
void take()
{
    cout << "please enter the student name:";
    cin >> stud.stud_Name;
    cout << "please enter the student id:";
    cin >> stud.stud_Id;
    cout << "please enter the student age:";
    cin >> stud.stud_age;
    cout << "please enter the student department:";
    cin >> stud.stud_depart;
}
void insert_end(string stud_Name, string stud_Id, int stud_age, string stud_depart)
{
    student *temp = new student;
    temp->stud_Name = stud_Name;
    temp->stud_Id = stud_Id;
    temp->stud_age = stud_age;
    temp->stud_depart = stud_depart;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        student *temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}

void display()
{
    int counter = 1;
    student *temp1;
    if (head == NULL)
        cout << "No data inside\n";
    else
    {
        temp1 = head;
        while (temp1 != NULL)
        {
            cout << counter << ",";
            cout << "STUDENT NAME:" << temp1->stud_Name << endl;
            cout << "STUDENT ID:" << temp1->stud_Id << endl;
            cout << "STUDENT AGE:" << temp1->stud_age << endl;
            cout << "STUDENT DEPARTMENT:" << temp1->stud_depart << endl
                 << endl;
            temp1 = temp1->next;
            counter++;
        }
    }
}
void insert_front(string stud_Name, string stud_Id, int stud_age, string stud_depart)
{
    student *temp = new student;
    temp->stud_Name = stud_Name;
    temp->stud_Id = stud_Id;
    temp->stud_age = stud_age;
    temp->stud_depart = stud_depart;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insert_right(string stud_Name, string stud_Id, int stud_age, string stud_depart, string stud_Id_search)
{
    student *temp = new student;
    temp->stud_Name = stud_Name;
    temp->stud_Id = stud_Id;
    temp->stud_age = stud_age;
    temp->stud_depart = stud_depart;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        student *temp2 = head;
        while (temp2->stud_Id != stud_Id_search)
        {
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
}

void delete_front()
{
    student *temp;
    if (head == NULL)
        cout << "No data inside\n";
    else
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}
void delete_end()
{
    student *temp, *temp2;
    if (head == NULL)
        cout << "No data inside\n";
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        delete temp;
    }
}
void delete_middle(string stud_id_delete)
{
    student *temp, *temp2;
    if (head == NULL)
        cout << "No data inside\n";
    else if (head->stud_Id == stud_id_delete)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        temp = head;
        while (temp->stud_Id != stud_id_delete)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = temp->next;
        delete temp;
    }
}
void search_node(string stud_id_search)
{
    student *temp;
    if (head == NULL)
        cout << "No data inside\n";
    else if (head->stud_Id == stud_id_search)
    {
        cout << "STUDENT NAME:" << head->stud_Name << endl;
        cout << "STUDENT ID:" << head->stud_Id << endl;
        cout << "STUDENT AGE:" << head->stud_age << endl;
        cout << "STUDENT DEPARTMENT:" << head->stud_depart << endl
             << endl;
    }
    else
    {
        temp = head;
        while (temp->stud_Id != stud_id_search)
        {
            temp = temp->next;
            if (temp->stud_Id == stud_id_search)
            {
                cout << "STUDENT NAME:" << temp->stud_Name << endl;
                cout << "STUDENT ID:" << temp->stud_Id << endl;
                cout << "STUDENT AGE:" << temp->stud_age << endl;
                cout << "STUDENT DEPARTMENT:" << temp->stud_depart << endl
                     << endl;
                break;
            }
        }
    }
}
