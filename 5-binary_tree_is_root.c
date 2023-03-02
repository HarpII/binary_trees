#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer of node to check
 *
 * Return: returns 1 if node is root
 * otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->left && node->right)
		return (1);
	else
		return (0);
}