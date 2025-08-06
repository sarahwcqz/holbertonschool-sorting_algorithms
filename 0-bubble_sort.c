#include "sort.h"

/**
 * bubble_sort - sorts an array of int in ascending order using the Bubble algo
 * @array: the array to print
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp = 0;


	while (j < size)
	{
		while (i < size - 1)
		{
			i = 0;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			i++;
		}
		j++;
	}
}
