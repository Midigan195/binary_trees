#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_node = malloc(sizeof(binary_tree_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->n = value;
	nw_node->parent = parent;
	nw_node->left = NULL;
	nw_node->right = NULL;

	return (nw_node);
}
