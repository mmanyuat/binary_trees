#include "binary_trees.h"

/**
 * binary_tree_balance - function to balance binary tree
 * @tree:the tree to be balanced
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
