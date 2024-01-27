#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/*
 *bubble_sort - Function that sorts an array of ints
 * @array - array of ints
 * @size - size of ints
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t d, f;

	if (!array || !size)
		return;
	d = 0;
	while (d < size)
	{
		for (f = 0; f < size - 1; f++)
		{
			if (array(f) > array(f + 1))
			{
				temp = array(f);
				array(f) = array(f + 1);
				array(f + 1) = temp;
				print_array(array, size);
			}
		}
		d++;
	}
}

