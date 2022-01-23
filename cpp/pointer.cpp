#include <iostream>
using namespace std;
struct pointer
{
    int x;
    int y;
};
int main(){
    pointer p = {3, 7};
    pointer *ptr = &p;
    p.y = 98;
    // ptr.y = 98;
    // p->y = 98;
    (*ptr).y = 89;
    ptr->y = 90;
}
