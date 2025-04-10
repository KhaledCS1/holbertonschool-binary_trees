#include "binary_trees.h"
/**
 * binary_tree_nodes - it counts the nodes with at least one child
 * @tree: the root node
 * Return: it returns count of nodes with one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	/* return 0 if tree is null */
	if (!tree)
		return (0);

	/* sets count 1 if there is at least one child */
	if (tree->right || tree->left)
		count = 1;

	/* counts nodes with at least one child */
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	/* returns count of total nodes with one child */
	return (count);
}
