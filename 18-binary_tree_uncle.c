#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: return NULL if
 * (
 * node is NULL
 * node has no uncle
 * )
 * otherwise
 * pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (node->parent == node->parent->parent->right ?
	node->parent->parent->left : node->parent->parent->right);
}
