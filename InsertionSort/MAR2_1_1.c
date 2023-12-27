/* 2.1-1
Using Figure 2.2 as a model, illustrate the operation of INSERTION-SORT on the
array A = {31, 41, 59, 26, 41, 58} */

#include <stdio.h>

int main()
{
    int arr[6] = {31, 41, 59, 26, 42, 58};
    int key = 0;
    int j = 0;
    const int arr_size = 6;

    for(int i = 0; i < arr_size; i++)
    {
        key = arr[i + 1];
        j = i;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
    }

    for(int b = 0; b < arr_size; b++)
        printf("%d", arr[b]);

        printf("sdfsdfsdfsdf");

    return 0;
}