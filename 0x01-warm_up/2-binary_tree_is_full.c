#include "search_algos.h"

/**
 * binary_tree_is_full - a function that checks if a BT is full.
 * @array: a pointer to the 1st element;
 * @size: the number of elements in the array;
 * @value: the value to search for
 * Return: the first index where value is located.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_is_full(tree->left);

	if (tree->right)
		right = 1 + binary_tree_is_full(tree->right);

	if (left - right == 0)
		return (1);

	return (0);
}
