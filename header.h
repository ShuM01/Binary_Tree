// tree_traversals.h
#ifndef TREE_TRAVERSALS_H
#define TREE_TRAVERSALS_H

#include #include
// Basic binary tree node structure
struct Node {
int data;
Node* left;
Node* right;

Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// --- Traversal function declarations ---

// Depth-first traversals
void inOrder(Node* root); // Left, Root, Right
void preOrder(Node* root); // Root, Left, Right
void postOrder(Node* root); // Left, Right, Root

// Breadth-first traversal
void levelOrder(Node* root);

#endif // TREE_TRAVERSALS_HSs