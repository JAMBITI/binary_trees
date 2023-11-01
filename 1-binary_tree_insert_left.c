#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left-child of another node
 * @parent: parent
 * @value: value
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;

	if (!parent)
		return (NULL);
	mynode = malloc(sizeof(binary_tree_t));
	if (!mynode)
		return (NULL);
	if (parent->left)
	{
		mynode->left = parent->left;
		parent->left->parent = mynode;
	}
	else
		mynode->left = NULL;
	mynode->n = value;
	mynode->right = NULL;
	mynode->parent = parent;
	parent->left = mynode;
	return (mynode);
}
