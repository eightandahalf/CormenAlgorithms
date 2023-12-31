/* Consider sorting n numbers stored in array A by first finding the smallest element
of A and exchanging it with the element in A[1]. Then find the second smallest
element of A, and exchange it with A[2]. Continue in this manner for the first n - 1
elements of A. Write pseudocode for this algorithm, which is known as selection
sort 

Unsorted array = 2 7 23 12 89 5 8 11 
Array after selection sort = 2 5 7 8 11 12 23 89 */

#include <stdio.h>

int main()
{
    int array[8] = {2, 7, 23, 12, 89, 5, 8, 11};
    int arr_size = 8; 
    int min_elem = 0;
    int search_start_pos = 0;
    int exchange_value = 0;
    int exchange_place = 0;

    // unsorted array
    for(int i = 0; i < arr_size; i++)
        printf("%d ", array[i]);

    for(int i = 0; i < arr_size; i++)
    {
        exchange_value = min_elem = array[i];
        search_start_pos = exchange_place = i;
        while(search_start_pos < arr_size)
        {
            if(array[++search_start_pos] < min_elem)
            {
                min_elem = array[search_start_pos];
                exchange_place = search_start_pos;
            }
        }    
        array[exchange_place] = exchange_value;
        array[i] = min_elem;
    }

    // array after selection sort
    printf("\n");
    for(int i = 0; i < arr_size; i++)
        printf("%d ", array[i]);

}