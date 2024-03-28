#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of a tree.
 *
 * Return:
 * total number of internal nodes, otherwise 0 if tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes = 0, rightNodes = 0;

	if (tree == NULL)
		return (0);

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);

	return (leftNodes + rightNodes + (tree->left || tree->right ? 1 : 0));
}
