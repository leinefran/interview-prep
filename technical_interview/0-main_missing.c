#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int missing_number(int array[], int n);
int main(void)
{
	int array[] = {1, 5, 3, 2, 6};

    printf("The missing number is: %d\n", missing_number(array, 6));
    return (0);
}
