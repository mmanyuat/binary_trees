#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert item to the right of binary tree
 * @parent:the parent binary tree
 * @value:the value of the binary tree
 * Return:the node to the right
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
	newNode->right = parent->right;
	parent->right->parent = newNode;
	}
	else
	{
	newNode->right = NULL;
	}
	parent->right = newNode;
	return (newNode);
}
