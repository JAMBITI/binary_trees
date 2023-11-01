#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function creates a binary tree node
 * @parent: parent
 * @value: value
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *mynode;

	mynode = malloc(sizeof(binary_tree_t));
	if (!mynode)
		return (NULL);
	mynode->parent = parent;
	mynode->n = value;
	mynode->left = NULL;
	mynode->right = NULL;
	return (mynode);
}
