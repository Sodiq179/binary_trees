#include "binary_trees.h"

/**
 * node_depth - measures the depth of a node in a binary tree
 *
 * @tree: tree root
 * Return: depth of a node in a binary tree
 */
size_t node_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (node_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls node_depth to return the depth
 * of a node in a binary tree
 *
 * @tree: tree root
 * Return: depth of the tree or 0 if tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (node_depth(tree));
}