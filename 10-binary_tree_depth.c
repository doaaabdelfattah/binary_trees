#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures depth of a node in a binary tree
 * @tree: pointer to the node to be measured
 * Return: Height of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *pt;

	depth = 0;
	pt = tree->parent;
	/* Base Case: if tree is empty */
	if (tree == NULL)
		return (0);

	while (pt != NULL)
	{
		depth++;
		pt = pt->parent;
	}
	return (depth);
}
