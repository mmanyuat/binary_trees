#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a node to the left
 * @parent:the parent node
 * @value:the value of the node
 * Return:the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newNode->right = NULL;

	if (parent->left != NULL)
	{
	newNode->left = parent->left;
	newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
