#include "binary_trees.h"
/**
 * binary_tree_leaves -  function that counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Return: leaves count
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	/* Base Case: if tree is empty */
	if (tree == NULL)
		return (0);

    /* Check if the current node is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		count += 1;

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	return (count);
}
