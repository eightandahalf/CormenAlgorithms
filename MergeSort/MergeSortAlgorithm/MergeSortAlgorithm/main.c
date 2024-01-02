#include <stdlib.h>
#include <stdio.h>


void merge(int* array, int p, int q, int r)
{
	int* first_subarray;
	int* second_subarray;

	int c1 = 0, c2 = 0; // counters for merging first and second subarray

	int l1 = 0, l2 = 0, l = 0; // l1 - length of first_subarray, l2 - length of second_subarray, l - length of init_array

	l1 = q - p + 1;
	l2 = r - q;
	l = l1 + l2;

	first_subarray = malloc((l1 + 1) * sizeof(int)); // l1 + 1, because we will use sentinel card(big value at the end of subarray)
	second_subarray = malloc((l2 + 1) * sizeof(int)); // l1 + 1, because we will use sentinel card(big value at the end of subarray)

													  // split
	for (int i = 0; i < l1; i++)
		first_subarray[i] = array[p + i];

	for (int i = 0; i < l2; i++)
		second_subarray[i] = array[q + i + 1];

	// sentinel card

	first_subarray[l1] = second_subarray[l2] = 10000;

	// merge sort
	for (int k = p; k <= r; k++)
	{
		if (first_subarray[c1] <= second_subarray[c2])
			array[k] = first_subarray[c1++];
		else
			array[k] = second_subarray[c2++];
	}

	free(first_subarray);
	free(second_subarray);
}

void merge_sort(int* array, int p, int r)
{
	int q = 0; // index of init_array, that tell, that elem of this index is last index of first subarray

	if (p < r)
	{
		q = (p + r) / 2; // the last index of first part of array
		merge_sort(array, p, q); // range between first index and index q, including q
		merge_sort(array, q + 1, r); // range between index q + 1 and r, including q
		merge(array, p, q, r);
	}
	else {
		; // array consists of the one element and is thus sorted
	}
}

int main()
{
	int init_array[8] = { 5, 2, 4, 7, 1, 3, 2, 6 };

	int r = 7; // first index of init_array
	int p = 0; // first index of init_array
			   // first and second subarray means that elements in this array are sorted

	int array_size = 8;

	printf("Unsorted array:\n");
	for (int i = 0; i < array_size; i++)
		printf("%d ", init_array[i]);

	merge_sort(init_array, p, r);

	printf("\nArray after merge sort\n");
	for (int i = 0; i < array_size; i++)
		printf("%d ", init_array[i]);

	printf("\n\nPress any key to exit...\n");
	getchar();
	return 0;

}