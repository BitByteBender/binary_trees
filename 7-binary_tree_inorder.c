#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs a in-order traversal of a binary tree.
 * @tree: Pointer to the root node of the tree
 * @func: Function to be called on each node during traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
