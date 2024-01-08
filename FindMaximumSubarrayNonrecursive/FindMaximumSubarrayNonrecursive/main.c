#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct lhs { // lhs - "low high sum" attributes
	int low, high, sum;
} typedef lhs;

lhs* find_max_subarray(int* array, int low, int high)
{
	int sum = 0;

	for (int i = low; i < high; i++)
	{
		sum += array[i];
		if(array[i] >= sum)
	}

}

int main()
{
	int array_size = 10;
	srand(time(NULL));   // Initialization, should only be called once.

	int array[10] = { -23, 83, -2, 4, 60, -44, -79, -22, 38, 8 };

	int high, low;
	high = array_size - 1;
	low = 0;

	lhs* lhs_obj = find_max_subarray(array, low, high);

	printf("\nHigh index of array equal to %d", lhs_obj->high);
	printf("\nLow index of array equal to %d", lhs_obj->low);
	printf("\nSum of maxsum subarray equal to %d\n", lhs_obj->sum);

	free(lhs_obj);

	printf("Press any key to exit...\n");
	getchar();
	return 0;
}