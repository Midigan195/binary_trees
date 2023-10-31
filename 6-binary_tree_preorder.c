#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverse a binary tree in preorder and display each node
 * @tree: pointer to the root node
 * @func: function to perform on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
