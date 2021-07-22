#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: (0) if tree is perfect else (0)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	
	if (!tree)
		return (0);
	
	return (l & r & (binary_tree_balance(tree) == 0));
}

