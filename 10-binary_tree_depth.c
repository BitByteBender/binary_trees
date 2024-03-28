#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of the binary tree.
 * @tree: pointer to the root node of the tree to measure its depth.
 *
 * Return:
 * The depth of the node. If tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
