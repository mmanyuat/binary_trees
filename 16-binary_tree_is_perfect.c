#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check whether tree is perfect
 * @tree:the tree
 * Return:1 if tree is perfect 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height == right_height &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
