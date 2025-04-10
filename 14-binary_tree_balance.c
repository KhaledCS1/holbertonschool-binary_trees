#include "binary_trees.h"
/**
 * binary_tree_height - it counts the height of the given node
 * @tree: usually it is the root node
 * Return: it returns the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/* attributes to calc left & right height */
	size_t left = 0;
	size_t right = 0;
	
	/* if tree == null then stop. */
	if(!tree)
		return (0);


	  /* calculating left child */
	left = binary_tree_height(tree->left);

	/* calculating right child */
        right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	
	return (right + 1);

}
/**
 * binary_tree_balance - it calculates the difference of left & right
 * @tree: the root node
 * Return: returns the Balance formula
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	/* if tree is null return 0; */
	if (!tree)
		return (0);
	
	/* calc left height */
	if (tree->left)
		left_height = binary_tree_height(tree->left);

	/* calc right height */
	if (tree->right)
		right_height = binary_tree_height(tree->right);

	/* Balance formula */
	return (left_height - right_height);
}
