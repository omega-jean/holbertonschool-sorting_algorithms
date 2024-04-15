#include "sort.h"


/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer
 * @size: ...
 *
 */


void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	int i = -1, temp;
	size_t j;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < array[size - 1])
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[size - 1];
	array[size - 1] = temp;
	print_array(array, size);

	quick_sort(array, i + 1);
	quick_sort(array + i + 2, size - i - 2);
}
