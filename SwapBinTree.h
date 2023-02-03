#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Node structure
 */
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};


/**
 * @brief Create a new node
 * 
 * @param data
 * 
 * @return struct Node* 
 */
struct Node *createNode(int data);

/**
 * @brief Insert a node into the tree
 * 
 * @param root
 * @param data
 * 
 * @return struct Node* 
 */
struct Node *insertNode(struct Node *root, int data);

/**
 * @brief Swap the left and right nodes
 * 
 * @param root
 * 
 * @return struct Node* 
 */
struct Node *swapNodes(struct Node *root);

/**
 * @brief Print the tree in order
 * 
 * @param root
 */
void printTree(struct Node *root);
