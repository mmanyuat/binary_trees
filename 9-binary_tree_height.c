#include "binary_trees.h"

/**
 * binary_tree_height - function to find tree height
 * @tree:binary tree
 * Return:the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	return (0);

	while (tree && (tree->left || tree->right))
	{
	if (tree->left)
	tree = tree->left;
	else
	tree = tree->right;
	height++;
	}
	return (height);
}
