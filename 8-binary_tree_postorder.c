#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverse a binary tree in postorder and display each node
 * @tree: pointer to the root node
 * @func: function to perform on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}