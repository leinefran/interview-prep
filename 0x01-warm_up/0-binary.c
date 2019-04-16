#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of integers
 * using the Binary search algorithm;
 * @array: a pointer to the 1st element;
 * @size: the number of elements in the array;
 * @value: the value to search for
 * Return: the first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
  /* low and high keep track of which part of the list  will be searched */
	int low = 0;
	int high = size - 1;
	int index = 0;
	int middle = 0;

	if (!array || !value)
		return (-1);

	/* While you haven't narrowed it down to one element */
	while (low <= high)
	{
		printf("Searching in array: ");

		for (index = low; index <= high - 1; index++)
		{
			printf("%i, ", array[index]);
		}
		printf("%i\n", array[index]);

		middle = (low + high) / 2; /* check the mid element */

		/* the guess was too low */
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		/* the guess was too high */
		else if (array[middle] > value)
		{
			high = middle - 1;
		}
		/* found the value */
		else
			return (middle); /* return found element */
	}
	return (-1);
}
