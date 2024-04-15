#include "sort.h"
/**
 * bubble_sort - Write a function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm.
 * @array: The sorting of the array.
 * @size: Number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp;
	int swap = 1;
	size_t count;

	if (array == NULL || size < 2) /* Check if the array is NULL */
					  /* or has less than 2 elements */
		return;

	while (swap)
	{
		swap = 0;
		count = 0;

		while (count < size - i - 1) /* Scroll the table to size - i - 1 */
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count]; /* exchange elements */
				array[count] = array[count + 1];
				array[count + 1] = temp; /* Move temporary element to next position */
				swap = 1; /* the exchange is done */
				print_array(array, size); /* Print the table after the exchange */
			}
			count++; /* Go to next item */
		}
		i++; /* Reduce array size with each iteration */
	}
}
