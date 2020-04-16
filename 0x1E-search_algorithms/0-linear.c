#include "search.h"
#include <stdio.h>
/**
 * linear_search - Linear search algorithm
 * @array: Array Values.
 * @size: Size Array.
 * @value: Search Value.
 * Return: Int Value Search
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int idx = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (idx < size)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
			return (idx);
		}
		else
		{
			printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
			idx++;
		}
	}
	return (-1);
}
