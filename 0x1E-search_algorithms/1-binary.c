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
	unsigned int lowerLimit = 0;
	unsigned int upperLimit = size - 1;
	unsigned int middle, i;

	if (array == NULL)
		return (-1);
	while (lowerLimit <= upperLimit)
	{
		printf("Searching in array: ");
		for (i = lowerLimit; i <= upperLimit; i++)
		{
			printf("%d", array[i]);
			if (i < upperLimit)
				printf(", ");
			else
				printf("\n");
		}
		middle = (lowerLimit + upperLimit) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			lowerLimit = middle + 1;
		if (array[middle] > value)
			upperLimit = middle - 1;
	}
	return (-1);
}
