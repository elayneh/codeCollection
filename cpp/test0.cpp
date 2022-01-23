#include <iostream>
using namespace std;
int main(){
string name{"belayneh getachew"};
cout<<name;
string *ptr = &name;
cout<<endl<<*ptr<<" "<<"inteter your name here: "; 

cin>>*ptr;
cout<<name<<" "<<*ptr;


    cout<<endl;return 0;
}
  