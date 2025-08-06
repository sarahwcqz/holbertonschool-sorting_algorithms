#include "sort.h"

/**
 * selection_sort - sorts an array of int w/ the Selection sort algo
 * @array: the array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0, temp = 0;

		while (i < size - 1)
		{
			min = i;
			j = i + 1;
			while (j < size)
			{
				if (array[min] > array[j])
				{
					min = j;
				}
				j++;
			}
			if (min != i)
			{
				temp = array[min];
				array[min] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
}
