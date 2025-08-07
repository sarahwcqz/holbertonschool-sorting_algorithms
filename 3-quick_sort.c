#include "sort.h"

/**
 * quick_sort - sorts an array of int using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array to sort
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, piv = size, temp = 0;		/* indexes initialized*/

/*-------------traverse l'array avec j, si j < pivot, swap i et j -------*/
	while (j < piv)		/* < ou <= ? Besoin de prendre pivot?*/
	{
		if (array[j] <= array[piv])
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
		j++;
	}

/*--------------swap pivot et i ------------------*/
	temp = array[i];
	array[i] = array[piv];
	array[piv] = temp;

/* et maintenant la recursioooooon*/
/*         |     <= piv      |     > piv      |     */
}
