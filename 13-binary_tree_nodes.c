#include "binary_trees.h"
/**
 * binary_tree_nodes - it counts the nodes with at least 1 child
 * @tree: the root node
 * Return: it returns count of nodes with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->right || tree->left)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
