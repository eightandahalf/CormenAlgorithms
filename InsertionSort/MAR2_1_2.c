/* 2.1-2
Rewrite the INSERTION-SORT procedure to sort into nonincreasing instead of nondecreasing order 
array A = {31, 41, 59, 26, 41, 58} 
and, I should get: 59, 58, 42, 41, 31, 26 */

#include <stdio.h>

int main()
{
    int arr[6] = {31, 41, 59, 26, 42, 58};
    int key = 0;
    int j = 0;
    int arr_size = 6;

    
    for(int i = 0; i < (arr_size - 1); i++)
    {
        key = arr[i + 1];
        j = i;
        while(j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
    }

    for(int b = 0; b < arr_size; b++)
        printf("%d\n", arr[b]);

    return 0;
}