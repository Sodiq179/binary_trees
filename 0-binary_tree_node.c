#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree mode
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *tempNode = NULL;


    tempNode = malloc(sizeof(binary_tree_t));
    if (tempNode == NULL){
        return NULL;
    }

    tempNode->parent = parent;
    tempNode->n = value;
    tempNode->left = NULL;
    tempNode->right = NULL;

    return tempNode;
}