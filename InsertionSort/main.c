#include <stdio.h>


int main(void)
{
	int array[6] = {5, 2, 4, 6, 1, 3};	
 	int key = 0;
	int i = 0;

	for(int i = 0; i < 6; i++)
                printf("%d", array[i]);

	printf("\n");

	for(int j = 1; j < 6; j++)
  	{
		key = array[j];
		i = j - 1;
		while (i >= 0 && array[i] > key)
		{
			array[i + 1] = array[i];
			i = i - 1;
		}
		array[i + 1] = key;
  	}	

	for(int i = 0; i < 6; i++)
		printf("%d", array[i]);

	return 0;
}

