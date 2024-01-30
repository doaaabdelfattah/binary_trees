#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node
 * @parent: poniter to the parent node of the node to created
 * @value: value of the node to be added
 * Return: pointer to the new node or NULL on fail
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

/* Dynamically create BT node */
new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (new_node == NULL)
	return (NULL);
new_node->right = NULL;
new_node->left = NULL;
new_node->n = value;
/* connect the new node with parent */
new_node->parent = parent;
return (new_node);
}
