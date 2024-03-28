#include "binary_trees.h"
/**
 * binary_tree_size - calcs the number of nodes in the binary tree.
 * @tree: Pointer to the root node of the tree for size calc.
 *
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
