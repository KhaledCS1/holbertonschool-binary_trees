#include "binary_trees.h"
/**
 * binary_tree_leaves - it counts the leaves of the binary tree
 * @tree: is the root of the tree
 * Return: it returns num of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
