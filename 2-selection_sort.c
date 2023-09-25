#include "sort.h"

/**
* swap_ints - Swap the two integers.
* @a: For swap this integer with b.
* @b: For swap this integer with a.
*/
void swap_ints(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

/**
* selection_sort - Sorts an array of integers in ascending order
* @array: array to sort.
* @size: size of the array.
*
* Description: Prints the array after each swap.
*/
void selection_sort(int *array, size_t size)
{
int *mini;
size_t i, j;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
mini = array + i;
for (j = i + 1; j < size; j++)
mini = (array[j] < *mini) ? (array + j) : mini;

if ((array + i) != mini)
{
swap_ints(array + i, mini);
print_array(array, size);
}
}
}
