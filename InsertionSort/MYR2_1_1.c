/* 2.1-1
Using Figure 2.2 as a model, illustrate the operation of INSERTION-SORT on the
array A = {31, 41, 59, 26, 41, 58} */

#include <stdio.h>

int main()
{
    int array[6] = {31, 41, 59, 26, 41, 58};
    int key = 0;
    int j = 0;
    int array_size = 6;

    for(int i = 0; i < array_size; i++)
    {
        key = array[i + 1];
        j = i;
        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            array[j] = key;
            j--;
        }
    }

    for(int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}