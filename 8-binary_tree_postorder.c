#include "binary_trees.h"
/**
 * binary_tree_postorder - performs a post-order traversal of the binary tree.
 * @tree: pointer to the root node of the tree
 * @func: procedure to be called on each node during traversal
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
