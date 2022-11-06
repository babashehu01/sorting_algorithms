#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort- sort an array of integers
 *
 * @array- array pointer
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp, i, swap;

	for(i = 0; i < (size -1); i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swap++;
			print_array(array, size);
		}
		if (swap == 1)
		{
			i = -1;
			swap = 0;
		}

	}
}
