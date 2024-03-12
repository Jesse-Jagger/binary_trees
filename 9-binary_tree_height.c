#include "binary_trees.h"

/**
 * binary_tree_height - calc the height of the binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0, k = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		k = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((i > k) ? i : k);
	}
	return (0);
}
