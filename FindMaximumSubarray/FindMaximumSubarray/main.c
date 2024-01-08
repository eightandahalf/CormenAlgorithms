#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct lhs { // lhs - "low high sum" attributes
	int low, high, sum;
} typedef lhs;

lhs* find_max_crossing_subarray(int* array, int low, int mid, int high)
{
	lhs* lhs_obj = (lhs *)malloc(sizeof(lhs));

	int leftsum = -2147483647, rightsum = -2147483647;
	int sum = 0;
	int MaxLeftIndex = 0, MaxRightIndex = 0;

	for (int i = mid; i >= low; i--)
	{
		sum += array[i];
		if (sum > leftsum)
		{
			leftsum = sum;
			MaxLeftIndex = i;
		}
	}
	sum = 0;
	for (int i = (mid + 1); i <= high; i++)
	{
		sum += array[i];
		if (sum > rightsum)
		{
			rightsum = sum;
			MaxRightIndex = i;
		}
	}
	lhs_obj->low = MaxLeftIndex;
	lhs_obj->high = MaxRightIndex;
	lhs_obj->sum = leftsum + rightsum;

	return lhs_obj;
}

lhs* find_max_subarray(int* array, int low, int high)
{
	lhs* left_lhs_obj;
	lhs* right_lhs_obj;
	lhs* cross_lhs_obj;
	int mid = 0;

	if (high == low)
	{
		lhs* lhs_obj = (lhs *)malloc(sizeof(lhs));
		lhs_obj->low = low;
		lhs_obj->high = high;
		lhs_obj->sum = array[low];
		return lhs_obj;
	}
	else {
		mid = (high + low) / 2;
		left_lhs_obj = find_max_subarray(array, low, mid);
		right_lhs_obj = find_max_subarray(array, mid + 1, high);
		cross_lhs_obj = find_max_crossing_subarray(array, low, mid, high);

		if (left_lhs_obj->sum >= right_lhs_obj->sum && left_lhs_obj->sum >= cross_lhs_obj->sum)
		{
			free(right_lhs_obj); free(cross_lhs_obj);
			return left_lhs_obj;
		}
		else if (right_lhs_obj->sum >= left_lhs_obj->sum && right_lhs_obj->sum >= cross_lhs_obj->sum)
		{
			free(left_lhs_obj); free(cross_lhs_obj);
			return right_lhs_obj;
		}
		else
		{
			free(left_lhs_obj); free(right_lhs_obj);
			return cross_lhs_obj;
		}
	}
}

int main()
{
	int array_size = 10;
	srand(time(NULL));   // Initialization, should only be called once.
	int* array = (int*)malloc(sizeof(int) * array_size);
	int high, low;
	high = array_size - 1;
	low = 0;

	for (int i = 0; i < array_size; i++)
	{
		array[i] = (rand() % 200) - 100; // random negative and positive numbers
		printf("%d ", array[i]);
	}

	lhs* lhs_obj = find_max_subarray(array, low, high);

	printf("\nHigh index of array equal to %d",lhs_obj->high);
	printf("\nLow index of array equal to %d", lhs_obj->low);
	printf("\nSum of maxsum subarray equal to %d\n", lhs_obj->sum);

	free(array);
	free(lhs_obj);

	printf("Press any key to exit...\n");
	getchar();
	return 0;
}

// WAY TO TEST PROGRAM WITH STATIC ARRAY "ARRAY"
//int main()
//{
//	int array_size = 10;
//	srand(time(NULL));   // Initialization, should only be called once.
//
//	int array[10] = { 3, -100, -100, -100, -100, -100, -100, -100, -100, -100 };
//
//	int high, low;
//	high = array_size - 1;
//	low = 0;
//
//	lhs* lhs_obj = find_max_subarray(array, low, high);
//
//	printf("\nHigh index of array equal to %d", lhs_obj->high);
//	printf("\nLow index of array equal to %d", lhs_obj->low);
//	printf("\nSum of maxsum subarray equal to %d\n", lhs_obj->sum);
//
//	free(lhs_obj);
//
//	printf("Press any key to exit...\n");
//	getchar();
//	return 0;
//}