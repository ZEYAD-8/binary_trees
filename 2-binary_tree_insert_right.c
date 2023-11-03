#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a function
 * to inserts a node as the  right-child of another node.
 * @parent: Pointer to parent node
 * @value: Value of parent node
 *
 * Return: Pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->left = NULL;
	node->parent = parent;
	node->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
