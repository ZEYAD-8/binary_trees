#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the height.
 *
 * Return: The height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_left = 0;
	size_t max_right = 0;
	if (tree == NULL)
	{
		return 0;
	}
	else
	{
		max_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		max_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((max_left > max_right) ? max_left : max_right);
	}
}
