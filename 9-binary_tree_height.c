#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Calculate the height of binary tree
 * @tree: pointer to the root node
 * Return: the total height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
