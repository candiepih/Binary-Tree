#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: (0) if tree is perfect else (0)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	return (l & r & (binary_tree_balance(tree) == 0));
}

