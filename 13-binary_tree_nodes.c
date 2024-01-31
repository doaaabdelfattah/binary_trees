#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree
 * @tree:  pointer to the root node
 * Return: counts of the node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	/* Base Case: if tree is empty */
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count += 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
