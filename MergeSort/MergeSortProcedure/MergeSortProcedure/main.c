// merge procedure
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int* first_subarray;
	int* second_subarray;

	int init_array[10] = { 1, 3, 5, 8, 18, 24, 2, 4, 6, 100 };
	int c1 = 0, c2 = 0; // counters for merging first and second subarray

	int r = 9; // last index of init_array
	int q = 5; // index of init_array, that tell, that elem of this index is last index of first subarray
	int p = 0; // first index of init_array
			   // first and second subarray means that elements in this array are sorted

	int l1 = 0, l2 = 0, l = 0; // l1 - length of first_subarray, l2 - length of second_subarray, l - length of init_array

	l1 = q - p + 1;
	l2 = r - q;
	l = l1 + l2;

	first_subarray = malloc((l1 + 1) * sizeof(int)); // l1 + 1, because we will use sentinel card(big value at the end of subarray)
	second_subarray = malloc((l2 + 1) * sizeof(int)); // l1 + 1, because we will use sentinel card(big value at the end of subarray)

	printf("Unsorted array:\n");
	for (int i = 0; i < l; i++)
		printf("%d ", init_array[i]);

	// split
	for (int i = 0; i < l1; i++)
		first_subarray[i] = init_array[p + i];

	for (int i = 0; i < l2; i++)
		second_subarray[i] = init_array[q + i + 1];

	// sentinel card

	first_subarray[l1] = second_subarray[l2] = 10000;

	// merge sort
	for (int k = p; k < l; k++)
	{
		if (first_subarray[c1] <= second_subarray[c2])
			init_array[k] = first_subarray[c1++];
		else
			init_array[k] = second_subarray[c2++];
	}

	printf("\nArray after merge sort\n");
	for (int i = 0; i < l; i++)
		printf("%d ", init_array[i]);

	free(first_subarray);
	free(second_subarray);

	printf("\n\nPress any key to exit...\n");
	getchar();
	return 0;
}