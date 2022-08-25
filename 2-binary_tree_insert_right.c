#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *tempNode = NULL;

    if (parent = NULL)
        return (NULL);

    tempNode = malloc(sizeof(binary_tree_t));
    if (tempNode == NULL)
        return (NULL);

    tempNode->parent = parent;
    tempNode->n = value;
    tempNode->left = NULL;
    tempNode->right = parent->right;

    if (parent->right != NULL)
        parent->right->parent = tempNode;

    parent->right = tempNode;

    return (tempNode);
}