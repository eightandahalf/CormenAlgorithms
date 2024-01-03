I had a task, that I should write the realisation of insertion sort as a recursive procedure,
so I wrote this code.
Yes, running time is so bad, but I had a goal to write insertion sort as recursive procedure as well how I 
understand this task.

So, the main idea of this code, that we reach first and second elements of array, sort them, 
then we sort the three first element, then the four and etc., until we doesn't sort all array.

I use notation of "last_valid_index", because in insertion sort even in the first iteration we
use two elements, in language C it means that we use array indexes 0 and 1, because last the last iteration
of insertion sort must have number = array_size - 1 - 1, because array indexes in C started with 0.
Let's take an example: we have array of 10 elements = array[10], last index of this array is 9, and if
we ignore "last_valid_index" condition we get following problem, in the for loop, when the number i
is eqaul to 9, index of key(look down in procedure insertion_sort) will have index 10, but, this is mistake,
because elem = array[10] goes out of bounds and will contain a garbage value, to avoid this,
in for loop, number of iteration should be in range between 0 and array_size - 1 - 1