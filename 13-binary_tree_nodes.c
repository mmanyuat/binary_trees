#include "binary_trees.h"

/**
 * binary_tree_nodes - function to calculate the nodes of a tree
 * @tree:the tree to be examined
 * Return:NULL or the child number
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left != NULL || tree->right != NULL)
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
	return (0);
}
