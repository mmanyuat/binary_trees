#include "binary_trees.h"

/**
 * binary_tree_sibling - function to calculate the sibling
 * @node:the node
 * Return:ptr to the node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->left == NULL || node->parent->right == NULL)
	return (NULL);
	if (node->parent->left == node)
	return (node->parent->right);
	else
	return (node->parent->left);
}
