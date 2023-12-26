/*ALGOTIHM RESULT:
 * 524613!!254613
 * 254613!!245613
 * 245613!!245613
 * 245613!!124563
 * 124563!!123456
 * 123456!!123456
*/

#include <stdio.h>

int main()
{
	int array_size = 6;
	int array[6] = {5, 2, 4, 6, 1, 3};
	int key = 0;
	int j = 0;

	for(int i = 0; i < array_size; i++)
	{
		for(int b = 0; b < array_size; b++)
                        printf("%d", array[b]);


		key = array[i + 1];
		j = i;
		while(j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			array[j] = key;
			j--;	
		}

		printf("!!");

		for(int b = 0; b < array_size; b++)
			printf("%d", array[b]);

		printf("\n");
	}


	return 0;
}

