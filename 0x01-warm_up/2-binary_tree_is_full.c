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
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
