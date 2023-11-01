#include "binary_trees.h"
/**
 * depth_finder -calculates the depth of a given node within the binary tree
 * @node: the node to start from
 * Return: the depth of the tree
 */
int depth_finder(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}
/**
 * isPerfectRec - recursive function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check
 * @dpth: the depth of a leaf node in the tree
 * @level: the level of the current node in the tree
 * Return: If they match, it returns 1; otherwise, it returns 0
 */
int isPerfectRec(const binary_tree_t *tree, size_t dpth, size_t level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (level == dpth ? 0 : 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerfectRec(tree->left, dpth, level + 1) &&
			isPerfectRec(tree->right, dpth, level + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
		return (0);
	d = depth_finder(tree);
	return (isPerfectRec(tree, d, 0));
}
