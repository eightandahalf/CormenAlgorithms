#include <stdio.h>
//	We can express insertion sort as a recursive procedure as follows. In order to sort
//	A[1..n], we recursively sort A[1..n-1] and then insert A[n] into the sorted array
//	A[1..n-1]. Write a recurrence for the running time of this recursive version of
//	insertion sort.

// можно для начала просто написать insertion sort, а дальше посмотреть

void insertion_sort(int* array, int array_size)
{
	int key = 0;
	int j = 0;

	for (int i = 0; i < (array_size- 1); i++)
	{
		key = array[i + 1];
		j = i;
		while (array[j] > key && j >= 0)
		{
			array[j + 1] = array[j];
			array[j] = key;
			j--;
		}
	}
}

int main()
{
	int array[10] = { 5, 2, 4, 7, 1, 3, 2, 6, 10, 1 };
	int array_size = 10;
	int last_elem = 0;

	for (int i = 0; i < array_size; i++)
		printf("%d ", array[i]);


	for (int i = array_size; i >= 0; i--)
	{
		last_elem = array[i - 1];
		insertion_sort(array, --array_size);
		array[i] = last_elem;
	}

	printf("\n");
	for (int i = 0; i < array_size; i++)
		printf("%d ", array[i]);

	getchar();
	return 0;
}