#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: return NULL if
 * (
 * node is NULL
 * or parents is NULL
 * or node has no sibling
 * )
 * otherwise
 * pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node == node->parent->left ?
	node->parent->right : node->parent->left);
}
