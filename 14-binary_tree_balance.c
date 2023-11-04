#include "binary_trees.h"
/**
 * balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the height.
 *
 * Return: The height of the tree
*/
size_t balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left = balance(tree->left);
	right = balance(tree->right);
	return (left > right ? left + 1 : right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the balance.
 *
 * Return: The balance factor of difference in heights
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	return (balance(tree->left) - balance(tree->right));
}
