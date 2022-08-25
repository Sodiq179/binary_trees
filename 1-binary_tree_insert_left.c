#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *tempNode = NULL;

    if (parent = NULL)
        return (NULL);

    tempNode = malloc(sizeof(binary_tree_t));
    if (tempNode == NULL)
        return (NULL);

    tempNode->parent = parent;
    tempNode->n = value;
    tempNode->right = NULL;
    tempNode->left = parent->left;

    if (parent->left != NULL)
        parent->left->parent = tempNode;

    parent->left = tempNode;

    return (tempNode);
}