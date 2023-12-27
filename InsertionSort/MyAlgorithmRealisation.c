#include <stdio.h>

int main()
{
	int array_size = 6;
	int array[6] = {5, 2, 4, 6, 1, 3};
	int key = 0;
	int j = 0;

	for(int i = 0; i < array_size; i++)
	{
		// just print array before sortion
		for(int b = 0; b < array_size; b++)
                        printf("%d", array[b]);

		// algorithm
		key = array[i + 1];
		j = i;
		while(j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			array[j] = key;
			j--;	
		}

		// and after sortion
		printf("!!");
		for(int b = 0; b < array_size; b++)
			printf("%d", array[b]);
		printf("\n");
	}


	return 0;
}

