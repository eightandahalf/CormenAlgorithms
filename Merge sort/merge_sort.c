#include <stdio.h>

int main()
{
    int p = 5; // start index of first subarray and min index of main array that we will sort
    int q = 9; // start index of second subarray 
    int r = 15; // last index of second subarray and last index of main array

    int n1 = q - p - 1; // length of first subarray
    int n2 = r - q; // length of second subarray

    int init_array[10] = {5, 12, 2, 6, 22, 23, 24, 11, 29, 10}; // initial array
    int first_subarray[n1] = {NULL};
    int second_subarray[n2 + 1];

}