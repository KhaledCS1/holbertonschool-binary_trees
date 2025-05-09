#include "binary_trees.h"
/**
 * binary_tree_depth - this method checks for the depth of the given node
 * and returns it
 * @tree: a pointer to a given node
 * Return: it returns the depth of the binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* Checking if tree exists */
	if (!tree)
		return (0);
	/* loop that goes to the parent if it exists + increments @depth */
	while (tree->parent)
	{
	tree = tree->parent;
	depth++;
	}
	/* retunrs the depth to the caller */
	return (depth);
}

