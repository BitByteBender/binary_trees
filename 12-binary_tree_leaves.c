#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaf nodes in a binary tree.
 * @tree: pointer to the root node of the tree for leaf counting.
 *
 * Return:total number of leaf nodes in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
