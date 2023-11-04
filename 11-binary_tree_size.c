#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: return the size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_left, size_right;
	if (tree == NULL)
	{
		return 0;
	}
	else
	{
		size_left = binary_tree_size(tree->left);
		size_right = binary_tree_size(tree->right);

		return (size_left + size_right + 1);
	}
}
