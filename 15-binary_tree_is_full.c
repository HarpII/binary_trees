#include "binary_trees.h"

/**
 * is_full_recursive - helper fuction
 * @tree: pointer to tree
 *
 * Return: 1 if full, 0 if is not full
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if the binary
 * tree is full
 * @tree: pointer to the root node
 * of the tree to check
 *
 * Return: 1 if tree is full
 * or 0 if tree is not full
 * or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_recursive(tree));
}
