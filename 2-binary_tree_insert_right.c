#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node as a right-child
 *                            in a binary tree
 * @parent: pointer to the node, to insert the right-child.
 * @value: value to store the new node.
 *
 * Return:
 * NULL, if an error occurs else a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
