#include <iostream>
using namespace std;
int main()
{
    int list[] = {1, 23, 453, 54, 643};
    
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if(list[i] > list[j])
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
        }
        
    }
    for (int k = 0; k < 5; k++){
        cout << list[k] << ", ";
    }

        return 0;
}