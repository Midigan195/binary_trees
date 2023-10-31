#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		total_nodes += 1;
		total_nodes += binary_tree_nodes(tree->left);
		total_nodes += binary_tree_nodes(tree->right);
	}

	return (total_nodes);
}
