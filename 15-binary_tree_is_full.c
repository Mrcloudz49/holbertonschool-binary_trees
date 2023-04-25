#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, and 0 if is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if is full or 0 if is not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	right = binary_tree_is_full(tree->right);
	left = binary_tree_is_full(tree->left);

	if (right == 0 || left == 0)
		return (0);

	return (1);
}

