#include "binary_trees.h"
/**
 * binary_tree_height - calcs a binary tree height.
 * @tree: pointer to the root node of a tree for height calc.
 *
 * Return:
 * The height of the tree. If the tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_h = 1 + binary_tree_height(tree->left);

	return (left_h > right_h ? left_h : right_h);
}
