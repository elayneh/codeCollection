/**
 * the shell sorting algorithm is the efficient than that of insertion sort
 * when the elements are found in worest case specially. sice there will be
 * less amount of comparisions and shifts in shell sort that insertion sort.
 *
 * there are different methods to calculate the gap the efficient one is h = 3hi + 1
 *  (where hi = 1). or else 2 power of whole number(0, 1, 2, 3, ...).
 * the main idea is to reduce (decreament the gap comtinously).
 * shell sort is some as insertion sort when gap=1. but there will be less compa. and shifts.
 */

#include <iostream>
using namespace std;

// shellsort implementation
int shellSort(int arr[], int N)
{
    for (int gap = N / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < N; i += 1)
        {
            // sort sub lists created by applying gap
            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {-90, 45, 23, 53, 43, 18, 24, 8, 95, 101}, i;
    // Calculate size of array
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Array to be sorted: \n";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    shellSort(arr, N);

    cout << "\nArray after shell sort: \n";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}
