#include <iostream>
using namespace std;

void bubble_sort(int *array, size_t size)
{
	for (int i = 0; i <= size - 2; i++)
	{
		for (int j = i; j <= size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			for (int n = 0; n < size; n++)
			{
				cout << array[n] << " ";
			}
			cout<<end
		}
	}
}

int main()
{
	int arr[] = {23, 54, 3, 43};
	bubble_sort(arr, 4);

	return 0;
}
