#include "binary_trees.h"

/**
 * binary_tree_is_full - balance binary tree
 * @tree:the tree to be inspected
 * Return:zero
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (1);

	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
