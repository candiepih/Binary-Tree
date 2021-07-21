#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: root node
 * @value: integer to be assigned to newly created node
 * Return: pointer to new_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	if (parent)
		new_node->parent = parent;
	else
		parent = new_node;

	return (new_node);
}