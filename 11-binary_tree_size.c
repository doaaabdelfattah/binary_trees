#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t LeftHeight;
	size_t RightHeight;

	LeftHeight = RightHeight = 0;

	/* Base Case: if tree is empty */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left and right subtrees */
	if (tree->left)
		LeftHeight = binary_tree_size(tree->left);
	else
		LeftHeight = 0;

	if (tree->right)
		RightHeight = binary_tree_size(tree->right);
	else
		RightHeight = 0;

	/* Return the size of both subtree + 1 (root node) */
		return (RightHeight + LeftHeight + 1);
}
