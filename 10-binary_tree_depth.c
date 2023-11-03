#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of
 * the tree to measure the depth.
 *
 * Return: The depth of the binary tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *traverse = tree->parent;
	while (traverse != NULL)
	{
		depth++;
		traverse = traverse->parent;
	}
	return (depth);
}
