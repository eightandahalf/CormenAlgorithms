#include <stdio.h>

void insertion_sort(int* array, int array_size)
{
	int key = 0;
	int j = 0;

	for (int i = 0; i < array_size; i++)
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

void recursive_insertion_sort(int* array, int last_valid_index)
{
	if (last_valid_index > 0)
	{
		last_valid_index--;
		recursive_insertion_sort(array, last_valid_index);
		insertion_sort(array, ++last_valid_index);
	}
}


int main()
{
	int array[10] = { 2, 5, 1, 10, 23, 15, 16, 90, 12, 8 };
	int last_valid_index = 9;
	int array_size = 10;

	// array before sorting
	printf("Unsorted array\n");
	for (int i = 0; i < array_size; i++)
		printf("%d ", array[i]);

	recursive_insertion_sort(array, last_valid_index);

	// array after recursive_insertion_sort
	printf("\nArray after recursive insertion sort\n");
	for (int i = 0; i < array_size; i++)
		printf("%d ", array[i]);

	printf("\nPress any key to exit...\n");
	getchar();
	return 0;
}