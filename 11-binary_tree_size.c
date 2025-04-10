#include "binary_trees.h"
/**
 * binary_tree_size - it calculates the every node as a size.
 * @tree: is the root node of the tree
 * Return: it returns the size of every node + 1 the root node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* a variable to calculate size */
	size_t size = 0;

	/* if tree is null return 0 */
	if (!tree)
		return (0);

	/* summing the size of all nodes */
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	/* Returns the size + 1 for the root node */
	return (size + 1);
}
