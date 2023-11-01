#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - return the uncle node of node
 * @node - node to compare
 * Return: Pointer to uncle node; else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return (NULL);
	else if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	
	return (NULL);
}
