#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t LeftHeight;
	size_t RightHeight;

	LeftHeight = RightHeight = 0;

	/* Base Case: if tree is empty */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	if (tree->left)
		LeftHeight = binary_tree_height(tree->left) + 1;
	else
		LeftHeight = 0;

	if (tree->right)
		RightHeight = binary_tree_height(tree->right) + 1;
	else
		RightHeight = 0;


	/* Return the max height of the left and right subtrees */
	if (LeftHeight > RightHeight)
		return (LeftHeight);
	else
		return (RightHeight);
}
