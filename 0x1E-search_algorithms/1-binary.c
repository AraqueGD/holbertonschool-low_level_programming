#include "search.h"
#include <stdio.h>
/**
 * binary_search - Binary search algorithm
 * @array: Array Values.
 * @size: Size Array.
 * @value: Search Value.
 * Return: Int Value Search
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	unsigned int middle, idx;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array:");
		for (idx = low; idx <= high; idx++)
		{
			printf("%d", array[idx]);
			if (idx < high)
				printf(", ");
			else
				printf("\n");
		}
		middle = (low + high) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		if (array[middle] > value)
		{
			high = middle - 1;
		}
	}
	return (-1);
}
