#include "sort.h"

/**
 * quick_sort - sorts an array of int using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array to sort
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
	size_t j = 0, piv = array[size -1], temp = 0;		/* indexes initialized*/
	int i = -1;
	size_t m;
/*-------------traverse l'array avec j, si j <= pivot, swap i et j -------*/
	for (m = 0; m < size; m++)
	{	
		while (j < size)
		{
			if (array[j] <= array[piv])
			{
				i++;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
/*--------------swap pivot et i ------------------*/
	temp = array[i];
	array[i] = array[piv];
	array[piv] = temp;
	/* et maintenant la recursioooooon*/
/*         |     <= piv      |     > piv      |     */
	}
}