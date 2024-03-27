#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a tree in pre-order
 * @tree:pointer to the root node of the tree to traverse
 * @func:ptr to call for each function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func)
}
