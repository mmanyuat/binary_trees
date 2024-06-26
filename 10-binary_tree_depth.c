#include "binary_trees.h"

/**
 * binary_tree_depth - function to claculate depth of a tree
 * @tree:the tree to be examined
 * Return:the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	return (0);

	while (tree && tree->parent)
	{
	tree = tree->parent;
	depth++;
	}
	return (depth);
}
