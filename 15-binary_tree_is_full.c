#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: (1) if tree is full else (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right) &&
		binary_tree_is_full(tree->right));
	return (0);
}

