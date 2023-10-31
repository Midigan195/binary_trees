#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - call the recursive_delete function to delete a binary tree
 * @tree: root pointer of binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		recursive_delete(tree);
}

binary_tree_t *recursive_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return(NULL);
	recursive_delete(tree->left);
	recursive_delete(tree->right);
	free(tree);
	return(NULL);
}
