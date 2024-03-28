#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *);
/**
 * binary_tree_height - calc the height of a binary tree.
 * @tree: pointer to the root node of the tree for height calculation.
 *
 * Return: height of the tree. If the tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
	right_h = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;

	return (left_h > right_h ? left_h : right_h);
}
/**
 * binary_tree_balance - calc the balance factor of a binary tree node.
 * @tree: pointer to the root node of the tree for balance factor calculation.
 *
 * Return: balance factor of the nde. If tree is empty, returns 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}
