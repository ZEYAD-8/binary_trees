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

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: return the number of leaves otherwise NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_Leaves, right_Leaves;

	if (tree == NULL)
	{
		return 0;
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return 1;
	}
	else
	{
		left_Leaves = binary_tree_leaves(tree->left);
		right_Leaves = binary_tree_leaves(tree->right);

		return left_Leaves + right_Leaves;
	}
}

/**
 * binary_tree_nodes - counts the nodes with at least 1
 *  child in a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: return the number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
