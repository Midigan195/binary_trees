#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Determine if node is a root structure in a tree
 * @node: node to be checked
 * Return: 1 if node is a root; otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return 0;
	if (node->parent == NULL)
		return 1;
	else
		return 0;
}
