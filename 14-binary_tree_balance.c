#include "binary_trees.h"

int count_tree(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a bianry tree
 * @tree: pointer to the root node
 * Return: balance value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height 0r 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left >= right)
		return (left);
	else
		return (right);
	return (0);
}

