#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node, 0 if node is NULL or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
  /* checking node & parent & parent's parent */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
