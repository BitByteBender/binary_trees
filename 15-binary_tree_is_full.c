#include "binary_trees.h"
int isFull(const binary_tree_t *);
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return:
 * if tree is NULL return 0  otherwise call the isFull()
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isFull(tree));
}

/**
 * isFull - checks recusrively
 * @tree: pointer to the root node of the tree to be checked
 * Return: once tree isFull() return 1 otherwise 0
 */
int isFull(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
	     (tree->left != NULL && tree->right == NULL))
		return (0);

	return (isFull(tree->left) && isFull(tree->right));
}
