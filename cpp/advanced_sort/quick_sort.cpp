/**
 * the fastest known algorithm.
 * uses divide and conquer strategy and in the worest case complexity is O(n^2).
 * but the expected complexity id O(nlogn).
 * 
*/
#include "../main.h"
#include <iostream>
using namespace std;


int partition(int array[], int low, int high){
    int pivot = array[high]; //pivot
    int i = low - 1; //Index of smaller element

    for (int j = low; j <= high -1; j++){
        if (array[j] <= pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return (i+1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void display(int arr[], int size){

    for( int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int array[]{12, 23,342, 434,-123, 0, 32};
    int n = sizeof(array)/sizeof(array[0]);
    cout<<"The given array before sortting is: ";
    display(array, n);
    quickSort(array, 0, n-1);
    cout<<"\nThe given array after sortting is: ";
    display(array, n);

    return 0;
}

