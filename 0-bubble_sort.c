#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order.
 * @array: array
 * @size: size 
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp;

	newsize = (size - 1);
	if (array == NULL)
		return;
	
	for (i = 0; i < size; i++)
	{
	for (n = 0; n < newsize; n++)
	{
	if (array[n] > array[n + 1])
		{
		tmp = array[n];
		array[n] = array[n + 1];
		array[n + 1] = tmp;
		print_array(array, size);
		}
	}
	}
}
