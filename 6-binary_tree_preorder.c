#include "binary_trees.h"
/**
 * binary_tree_preorder - performs a pre-order traversal of a binary tree.
 * @tree: pointer to the root node of the tree
 * @func: function to be called on each node during traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
