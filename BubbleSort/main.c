#include <stdio.h>

void bubble_sort(int* array, int array_size)
{
    int key;
    for(int i = 0; i < (array_size - 1); i++)
    {
        for(int j = (array_size - 1); j > i; j--)
        {
            if(array[j - 1] > array[j])
            {
                key = array[j];
                array[j] = array[j - 1];
                array[j - 1] = key;
            }
        }
    }

}

int main()
{
    int array[10] = {2, 4, 10, 3, 13, 1, 5, 9, 12, 6};
    int array_size = 10;

    printf("Unsorted array: \n");
    for(int i = 0; i < array_size; i++)
        printf("%d ", array[i]);

    bubble_sort(array, array_size);
    
    printf("\nArray after bubble sort: \n");
    for(int i = 0; i < array_size; i++)
        printf("%d ", array[i]);

}