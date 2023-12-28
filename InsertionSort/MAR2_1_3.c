/* Consider the searching problem:
Input: A sequence of n numbers A = {a1, a2,..., an} and a value V.
Output: An index i such that V = A[i] or the special value NIL if does not
appear in A.
Write pseudocode for linear search, which scans through the sequence, looking
for V. Using a loop invariant, prove that your algorithm is correct. Make sure that
your loop invariant fulfills the three necessary properties. 

p.s. I didn't fully understand the point of this task*/

#include <stdio.h>

int main()
{
    int arr[6] = {31, 41, 59, 26, 42, 58};
    int arr_size = 6;   
    int V = 41;
    int index = 0;

    for(int i = 0; i < (arr_size - 1); i++)
    {
        if(arr[i] == V)
            index = i;
    }

    printf("Index i is equal to %d", index);

    return 0;
}