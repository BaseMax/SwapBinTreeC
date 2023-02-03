#include "SwapBinTree.h"

/**
 * @brief Create a new node
 * 
 * @param data
 * 
 * @return struct Node* 
 */
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

/**
 * @brief Insert a node into the tree
 * 
 * @param root
 * @param data
 * 
 * @return struct Node* 
 */
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

/**
 * @brief Swap the left and right nodes
 * 
 * @param root
 * 
 * @return struct Node* 
 */
struct Node *swapNodes(struct Node *root)
{
    if (root == NULL) return NULL;
    else {
        struct Node *temp = root->left;
        root->left = root->right;
        root->right = temp;
        swapNodes(root->left);
        swapNodes(root->right);
    }
    return root;
}

/**
 * @brief Print the tree in order
 * 
 * @param root
 */
void printTree(struct Node *root)
{
    if (root == NULL) return;

    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);
}
