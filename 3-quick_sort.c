#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
* swap_ints - To Swap two integers.
* @a: To swap this integer with b.
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
* lomuto_partition - The lomuto partition scheme.
* @array: The array to order.
* @size: The size of the array.
* @left: The index of the first element of the subset to order.
* @right: The index of the last element of the subset to order.
*
* Return: The index of the pivot.
*/
int lomuto_partition(int *array, size_t size, int left, int right)
{
int *pivot, above, below;

pivot = array + right;
for (above = below = left; below < right; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
swap_ints(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
swap_ints(array + above, pivot);
print_array(array, size);
}

return (above);
}

/**
* lomuto_sort - The quicksorts a partition of an array of integers.
* @array: array to sort
* @size: The size of the array
* @left: index of the first element of the partition to order left
* @right: index of the last element of the partition to order right
*
* Description: lomuto_sort() uses the Lomuto partition scheme.
*/
void lomuto_sort(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = lomuto_partition(array, size, left, right);
lomuto_sort(array, size, left, part - 1);
lomuto_sort(array, size, part + 1, right);
}
}

/**
* quick_sort - To Sorts an array of integers in ascending order
* @array: array to sort
* @size: size of the array.
*
* Description: Uses the Lomuto partition scheme.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

lomuto_sort(array, size, 0, size - 1);
}

