#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts leaves in binary tree
 * @tree: pointer to the root node of the tree to count the leaves of
 * Return: number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int flag = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		flag = 1;
	flag += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (flag);
}
