#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: poniter to the parent node of the node to created
 * @value: value of the node to be added
 * Return: pointer to the new node or NULL on fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	/* Dynamically create BT node */
	new_node = binary_tree_node(parent, value);

	/*connect the new node with the tree */
	/*if the tree is empty: */

	if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	/*If the right child is NULL, simply insert the new node*/
	parent->right = new_node;
	return (new_node);
}
