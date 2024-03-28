#include "binary_trees.h"
size_t isPerfect(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL return 0 otherwise it's perfect 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size = 0, perfection = 0, height = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = isPerfect(tree);
	perfection = (1 << height) - 1;
	return (size == perfection);
}
/**
 * binary_tree_height - calcs binary tree's height
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH = 0, rightH = 0;

	if (tree == NULL)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	return (1 + (leftH > rightH ? leftH : rightH));
}
/**
 * isPerfect - clacs number of nodes in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes in the tree
 */
size_t isPerfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + isPerfect(tree->left) + isPerfect(tree->right));
}
