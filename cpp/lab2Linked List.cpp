#include <iostream>
using namespace std;
struct student{
    string stud_name, stud_id,stud_depart;
    int stud_age;
student *next;
};
student stud;
student *head = NULL;


int main(){
    int stud_num;
    cout<<"please inter the number of students: ";
    cin>>stud_num;
    l:
    cout<<"1.add\n2.add(front)\n3.add(middle)\n4.delete(end)\n5.delete(front)\n6.delete(middle)\n7.search node\nchoice:";
    cin>>int choice;
    
}
