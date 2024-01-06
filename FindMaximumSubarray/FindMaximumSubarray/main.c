#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct max_subarr_val_struct {
	int* array;
	int low, mid, high;
	int maxleft, maxright;
	int leftsum_plus_rightsum;
} typedef max_subarr_val_struct;


void find_max_crossing_subarray(max_subarr_val_struct* max_subarr_obj)
{
	int leftsum = -2147483647, rightsum = -2147483647;
	int sum = 0;
	int MaxLeftIndex = 0, MaxRightIndex = 0;

	for (int i = max_subarr_obj->mid; i >= max_subarr_obj->low; i--)
	{
		sum += max_subarr_obj->array[i];
		if (sum > leftsum)
		{
			leftsum = sum;
			MaxLeftIndex = i;
		}
	}
	sum = 0;
	for (int i = (max_subarr_obj->mid + 1); i <= max_subarr_obj->high; i++)
	{
		sum += max_subarr_obj->array[i];
		if (sum > rightsum)
		{
			rightsum = sum;
			MaxRightIndex = i;
		}
	}
	max_subarr_obj->maxleft = MaxLeftIndex;
	max_subarr_obj->maxright = MaxRightIndex;
	max_subarr_obj->leftsum_plus_rightsum = leftsum + rightsum;
}

int main()
{
	int array_size = 10;
	srand(time(NULL));   // Initialization, should only be called once.

	max_subarr_val_struct* max_subarr_obj = malloc(sizeof(max_subarr_val_struct));
	max_subarr_obj->low = 0;
	max_subarr_obj->mid = (array_size / 2) - 1;
	max_subarr_obj->high = array_size - 1;
	max_subarr_obj->array = malloc(array_size * sizeof(int));

	for (int i = 0; i < array_size; i++)
	{
		max_subarr_obj->array[i] = (rand() % 200) - 100;
		printf("%d ", max_subarr_obj->array[i]);
	}

	find_max_crossing_subarray(max_subarr_obj);

	printf("\n%d", max_subarr_obj->maxleft);
	printf("\n%d", max_subarr_obj->maxright);
	printf("\n%d\n", max_subarr_obj->leftsum_plus_rightsum);

	free(max_subarr_obj);

	printf("Press any key to exit...\n");
	getchar();
	return 0;
}