#include #include #include #include "header.h"
using namespace std;

void inOrder (Node* root) {
if (root == nullptr) {
return;
}

inOrder (root->left);
cout << root->data << " ";
inOrder (root->right);
}

void preOrder (Node* root) {
if (root == nullptr) {
return;
}

cout << root->data << " ";
preOrder (root->left);
preOrder (root->right);
}

void postOrder (Node* root) {
if (root == nullptr) {
return;
}

postOrder (root->left);
postOrder (root->right);
cout << root->data << " ";
}

void levelOrder (Node* root){
if (root == nullptr) {
return;
}
queue q;
q.push(root);

while (!q.empty()) {
Node* current = q.front();
q.pop();
cout << current->data << " ";

if (current-> left !=nullptr ) {
q.push(current->left);
}

if (current->right != nullptr) {
q.push(current->right);
}
}

cout << "\n";
}

int main () {
// Build a small tree:
// 1
// / \
// 2 3
// / \
// 4 5
Node* root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);

cout << "Inorder Traversal: ";
inOrder (root); // Expected output: 4 2 5 1 3
cout << endl;

cout << "Pre-Order Traversal: ";
preOrder (root); // Expected Output: 1 2 4 5 3
cout << endl;

cout << "Post-Order Traversal: ";
postOrder (root); // Expected Output: 4 5 2 3 1
cout << endl;

cout << "Level Order Traversal: ";
levelOrder (root);
cout << endl;

return 0;
}