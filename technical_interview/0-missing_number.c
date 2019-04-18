#include <stdio.h>

/**
 * missing_number - a function to find a missing number in an unsorted array
 * of intergers between 1 and n.
 * @array: the array to be searched;
 * @n: the last number in the array;
 * Return: the missing number;
 */
int missing_number(int array[], int n)
{
	int i, missing_number = 0;
	int sum_a = 0, sum_b = 0;

	if (n < 2)
		return (n);

	/* get the sum of given array */
	for (i = 0 ; i < n - 1 ; i++)
		sum_a += array[i];

	printf("sum_a is %d\n", sum_a);

	/* get the sum from 1 to n */
	for (i = 0 ; i < n + 1 ; i++)
		sum_b += i;

	printf("sum_b is %d\n", sum_b);

	/* missing number is the subtraction of sum_a and sum_b */
	missing_number = (sum_b - sum_a);
	return (missing_number);

}
