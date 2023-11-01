#include "binary_trees.h"

/**
 * binary_tree_size - get the size of a binary tree
 * @tree: the binary tree
 * Return: number of nodes in the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree != NULL)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}

	return (s);
}
