#include "search_algos.h"

/**
 * binary_tree_is_full - a function that checks if a BT is full.
 * @tree: is a pointer to the root node of the tree.
 * Return: 0 if tree is NULL. Otherwise, return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	/* if a binary tree node is NULL, then it's a full BT */
	if (tree == NULL)
		return (0);

	/* if a BT node has empty left and right sub-tree == full BT */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if both left & right are not NULL, */
	/* recursively check if left & right subtree are full: */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* Otherwise, return 0 */
	return (0);
}
