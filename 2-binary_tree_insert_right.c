#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @value: value to store in the new node
 * @parent: is a pointer to the node to insert the right child
 * Return: pointer to created node, or NULL on failure or parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}

