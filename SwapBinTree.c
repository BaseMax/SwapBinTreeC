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
    if (root == NULL) root = createNode(data);
    else if (data <= root->data) root->left = insertNode(root->left, data);
    else root->right = insertNode(root->right, data);

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

    // printf("L(");
    printTree(root->left);
    // printf(")<");
    printf("%d ", root->data);
    // printf("%d", root->data);
    // printf(">R(");
    printTree(root->right);
    // printf(")");
}

int main(int argc, char** argv)
{
    // Create the root node
    // struct Node *root = NULL;

    // Insert nodes into the tree
    // root = insertNode(root, 5);
    // root = insertNode(root, 3);
    // root = insertNode(root, 2);
    // root = insertNode(root, 4);
    // root = insertNode(root, 7);
    // root = insertNode(root, 6);
    // root = insertNode(root, 8);

    struct Node *root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(7);
    root->left->left = createNode(2);
    root->left->right = createNode(4);
    root->right->left = createNode(6);
    root->right->right = createNode(8);

    // Print the tree
    printf("Tree: ");
    printTree(root);
    printf("\n");

    // Swap the nodes
    root = swapNodes(root);

    // Print the tree
    printf("Swapped Tree: ");
    printTree(root);
    printf("\n");

    return 0;
}
