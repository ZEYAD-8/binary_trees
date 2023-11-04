#include "binary_trees.h"
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
