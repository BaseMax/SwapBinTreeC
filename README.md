# Swap Bin-Tree in C

A C program to swap the left and right nodes of a binary tree. It mean we are going to change the left node to right and right node to left. Even the child nodes of the left and right nodes will be swapped. This program is written in C language.

## Example

```c
// Create the tree
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
```

OR

```c
// Create the root node
struct Node *root = NULL;

// Insert nodes into the tree
root = insertNode(root, 5);
root = insertNode(root, 3);
root = insertNode(root, 2);
root = insertNode(root, 4);
root = insertNode(root, 7);
root = insertNode(root, 6);
root = insertNode(root, 8);

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
```

Copyright (c) 2023, Max Base
