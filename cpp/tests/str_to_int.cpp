/**
 * stoi(string with int)
 * stol(string with int)
 * stoll(string with int) and atio(string with int ) filters the integer value from the given text and discard every thing else.
 * which is at the starting point of the text (as 45 only the integer is filtered which is 45)
 * atoi()
 * atol()
 * atoll() Conversts byte string to integer(including long and long long type).
 * 
 * atod()
 * atof()
 * atold() Converts byte string to floating point values (indluding float, double and long double types).
 * 
 * stoul()
 * stoull() Converts byte string to unsigned integer (including unsigned long and undigned long long type).

 */#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr1 = "53";
    string mystr2 = "3.142";
    string mystr3 = "4545 with belayneh ";
     
  
    int strint1 = stoi(mystr1);
    float strint2 = stoi(mystr2);
    int strint3 = stoi(mystr3);
     
    cout << "stoi(\"" << mystr1 << "\") is " << strint1 << '\n';
    cout << "stoi(\"" << mystr2 << "\") is " << strint2 << '\n';
    cout << "stoi(\"" << mystr3 << "\") is " << strint3 << '\n';
     
}
