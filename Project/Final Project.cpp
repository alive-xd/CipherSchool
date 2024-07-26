Project : Implementation of Binary tree 
 
CODE: 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(NULL), right(NULL) {}
};

class BST {
public:
    Node* root;

    BST() : root(NULL) {}

    Node* insert(Node* node, int val) {
        if (node == NULL) {
            return new Node(val);
        }
        if (val < node->data) {
            node->left = insert(node->left, val);
        } else if (val > node->data) {
            node->right = insert(node->right, val);
        }
        return node;
    }

    Node* search(Node* node, int val) {
        if (node == NULL || node->data == val) {
            return node;
        }
        if (val < node->data) {
            return search(node->left, val);
        }
        return search(node->right, val);
    }

    Node* findMin(Node* node) {
        while (node && node->left != NULL) {
            node = node->left;
        }
        return node;
    }

    Node* deleteNode(Node* root, int val) {
        if (root == NULL) return root;

        if (val < root->data) {
            root->left = deleteNode(root->left, val);
        } else if (val > root->data) {
            root->right = deleteNode(root->right, val);
        } else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    void inOrder(Node* node) {
        if (node == NULL) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void preOrder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Node* node) {
        if (node == NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    BST tree;
    int values[] = {25, 15, 10, 22, 35, 30, 40};
    for (int i = 0; i < 7; ++i) {
        tree.root = tree.insert(tree.root, values[i]);
    }

    cout << "InOrder traversal: ";
    tree.inOrder(tree.root);
    cout << endl;

    cout << "PreOrder traversal: ";
    tree.preOrder(tree.root);
    cout << endl;

    cout << "PostOrder traversal: ";
    tree.postOrder(tree.root);
    cout << endl;

    cout << "Search for 22: " << (tree.search(tree.root, 22) ? "Found" : "Not Found") << endl;

    cout << "Delete 10\n";
    tree.deleteNode(tree.root, 10);
    cout << "InOrder traversal after deletion: ";
    tree.inOrder(tree.root);
    cout << endl;

    return 0;
}

Output-
InOrder traversal: 10 15 22 25 30 35 40 
PreOrder traversal: 25 15 10 22 35 30 40 
PostOrder traversal: 10 22 15 30 40 35 25 
Search for 22: Found
Delete 10
InOrder traversal after deletion: 15 22 25 30 35 40 

------Code Execution Successful-------

Project Document:

Programming Language: C++
Development Environment: Any C++ compatible IDE (e.g., Visual Studio, DevCpp)
Project Details: Overview,Features and Functionalities,Usage
Project Title: Implementation of Binary search tree(BST)

Implement Binary Search Tree with Following functions:
- search
- insert
- delete
- inorder traversal
- preorder traversal
- postorder traversal


Overview:

The project involves implementing a Binary Search Tree (BST) in C++. The BST is a fundamental data structure in computer science used for efficient data storage, retrieval, and manipulation. The project includes the core functionalities of a BST: insertion, search, and deletion of nodes. Additionally, it includes methods for in-order, pre-order, and post-order tree traversals to display the elements in different sequences.

Features and Functionalities:

Node Structure:

Each node in the BST contains an integer data, and pointers to the left and right children.
BST Class:

The class encapsulates the BST root and provides methods for various operations.


Insertion:
Inserts a new value into the BST while maintaining its properties. Values less than the current node go to the left, and values greater go to the right.

Search:
Searches for a specific value in the BST and returns the node if found, otherwise returns NULL.

Deletion:
Deletes a node with a given value from the BST. Handles three cases:
Node with no children (leaf node).
Node with one child.
Node with two children, where the node is replaced with its in-order successor.


Traversal Methods:
In-order Traversal: Visits nodes in ascending order (left, root, right).
Pre-order Traversal: Visits nodes in root-first order (root, left, right).
Post-order Traversal: Visits nodes in leaf-first order (left, right, root).

Time Complexity:
Average Case : O(log n) for insertion, deletion, and search operations.
 Worst Case : O(n) for insertion, deletion, and search operations in an unbalanced BST.

Usage:
The main function demonstrates the usage of the BST class by performing a series of insertions, a search, a deletion, and different types of traversals. The following operations are performed:

Insert values 25 15 10 22 35 30 40
Display the tree using in-order, pre-order, and post-order traversals.
Search for the value 22
Delete the node with the value 10.
Display the tree using in-order traversal after deletion.



