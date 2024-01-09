#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

struct lhs { // lhs - "low high sum" attributes
	int low, high, sum;
} typedef lhs;

lhs* find_max_subarray(int* array, int low, int high)
{
	lhs* lhs_obj = (lhs *)malloc(sizeof(lhs));

	int maxsum = INT_MIN;
	int leftmaxindex = 0, rightmaxindex = 0;
	int subarray_start_index = 0;
	int subarray_sum = 0;

	printf("\n\n");
	for (int i = low; i <= high; i++)
	{
		subarray_start_index = i;
		printf("start_index = %d, end_index = %d", i, 0);
		printf("\nwhile loop start:\n");
		while (subarray_start_index >= 0)
		{
			printf("\tsubarray_start_index = %d\n", subarray_start_index);
			printf("\tsubarray_end_index = %d\n", i);
			printf("\tfor indexes: ");
			for (int j = (low + subarray_start_index); j <= i; j++)
			{
				subarray_sum += array[j];
				printf("%d, ", j);
			}
			printf("subarray_sum = %d\n", subarray_sum);
			if (subarray_sum > maxsum)
			{
				maxsum = subarray_sum;
				leftmaxindex = low + subarray_start_index;
				rightmaxindex = i;
			}

			subarray_sum = 0;

			subarray_start_index--;

			printf("\n\n");
		}
	}
	lhs_obj->low = leftmaxindex;
	lhs_obj->high = rightmaxindex;
	lhs_obj->sum = maxsum;
	return lhs_obj;
}

int main()
{
	int array_size = 10;
	srand(time(NULL));   // Initialization, should only be called once.
	int* array = (int*)malloc(sizeof(int) * array_size);
	int high, low;
	high = array_size - 1;
	low = 0;

	printf("Start array:\n");
	for (int i = 0; i < array_size; i++)
	{
		array[i] = (rand() % 200) - 100; // random negative and positive numbers
		printf("%d ", array[i]);
	}

	lhs* lhs_obj = find_max_subarray(array, low, high);

	printf("\nHigh index of array equal to %d", lhs_obj->high);
	printf("\nLow index of array equal to %d", lhs_obj->low);
	printf("\nSum of maxsum subarray equal to %d\n", lhs_obj->sum);

	free(array);
	free(lhs_obj);

	printf("Press any key to exit...\n");
	getchar();
	return 0;
}

////////////////////////////////////// MAIN FUNCTION THAT PROVIDES TESTING OF A PROGRAM WITH STATIC ARRAY "ARRAY"
//int main()
//{
//	int array_size = 10;
//	srand(time(NULL));   // Initialization, should only be called once.
//
//	int array[10] = { -23, 83, -2, 4, 60, -44, -79, -22, 38, 8 };
//
//	printf("start array: ");
//	for (int i = 0; i < array_size; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n\n");
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
//////////////////////////////////////


////////////////////////////////////// PROGRAM WITHOUT PRINT
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <limits.h>
//
//struct lhs { // lhs - "low high sum" attributes
//	int low, high, sum;
//} typedef lhs;
//
//lhs* find_max_subarray(int* array, int low, int high)
//{
//	lhs* lhs_obj = (lhs *)malloc(sizeof(lhs));
//
//	int maxsum = INT_MIN;
//	int leftmaxindex = 0, rightmaxindex = 0;
//	int subarray_start_index = 0;
//	int subarray_sum = 0;
//
//	for (int i = low; i <= high; i++)
//	{
//		subarray_start_index = i;
//		while (subarray_start_index >= 0)
//		{
//			for (int j = (low + subarray_start_index); j <= i; j++)
//			{
//				subarray_sum += array[j];
//			}
//			if (subarray_sum > maxsum)
//			{
//				maxsum = subarray_sum;
//				leftmaxindex = low + subarray_start_index;
//				rightmaxindex = i;
//			}
//
//			subarray_sum = 0;
//
//			subarray_start_index--;
//		}
//	}
//	lhs_obj->low = leftmaxindex;
//	lhs_obj->high = rightmaxindex;
//	lhs_obj->sum = maxsum;
//	return lhs_obj;
//}
//
//int main()
//{
//	int array_size = 10;
//	srand(time(NULL));   // Initialization, should only be called once.
//	int* array = (int*)malloc(sizeof(int) * array_size);
//	int high, low;
//	high = array_size - 1;
//	low = 0;
//
//	printf("Start array:\n");
//	for (int i = 0; i < array_size; i++)
//	{
//		array[i] = (rand() % 200) - 100; // random negative and positive numbers
//		printf("%d ", array[i]);
//	}
//
//	lhs* lhs_obj = find_max_subarray(array, low, high);
//
//	printf("\nHigh index of array equal to %d", lhs_obj->high);
//	printf("\nLow index of array equal to %d", lhs_obj->low);
//	printf("\nSum of maxsum subarray equal to %d\n", lhs_obj->sum);
//
//	free(array);
//	free(lhs_obj);
//
//	printf("Press any key to exit...\n");
//	getchar();
//	return 0;
//}
//////////////////////////////////////