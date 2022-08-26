#include "sort.h"
/**
 * swap - function that swap elemnts
 * @xp: first element
 * @yp: last element
 * Return: nothing
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
 * partition - function that divide tavke to two
 * @array: array
 * @size: array size
 * Return: nothing
 */
int partition(int *arr, int low, int high)

{

	int pivot = arr[high];

	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)

	{

		if (arr[j] <= pivot)

		{

			i++;

			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i + 1], &arr[high]);

	return (i + 1);
}
/**
 * quickSort - function that sorts in quick sort
 * @array: array
 * @low: low element
 * @high: high element
 * Return: nothing
 */
void quickSort(int *arr, int low, int high)

{

	if (low < high)

	{

		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);

		quickSort(arr, pi + 1, high);
	}
}
/**
 * quick_sort - function that sorts in quick sort
 * @array: array
 * @size: array size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quickSort(array, 0, size - 1);
}
