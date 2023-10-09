/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU.

    Program: Binary Tree Implementation

*/

#include<iostream>

using namespace std;

typedef struct node Node;

struct node {
    int data;

    Node* left;
    Node* right;
};

Node* create_node(int data);

void post_order(Node*);


int main() {

    Node *root;

    root = create_node(5);

    root->left = create_node(3);
    root->right = create_node(7);

    root->left->left = create_node(1);
    root->left->right = create_node(2);

    root->right->left = create_node(9);
    root->right->right = create_node(11);

    post_order(root);


    return 0;
}

/// creating node for tree
Node* create_node(int data) {

    Node* new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOW!!!\n");
        exit(1);
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

/// display the tree
void post_order(Node* root) {

    if(root == NULL) return;

    printf("%d->", root->data);

    post_order(root->left);
    post_order(root->right);
}
