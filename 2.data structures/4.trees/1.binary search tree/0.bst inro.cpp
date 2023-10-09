/*
    Author: Mazharul Islam
            CSE, HSTU.

    Program: Binary Search Tree
    TC: O(logN)
    SC: O(n)

*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;

typedef struct node Node;

/// definition of BST node
struct node {

    int key;
    Node *left;
    Node *right;
};

/// function prototyping
Node* create_node(int);

void inorder_traverse(Node*);

Node* insert_node(Node*, int);

int main() {

    /// for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = NULL;

    root = insert_node(root, 50);

    insert_node(root, 30);
    insert_node(root, 20);
    insert_node(root, 40);
    insert_node(root, 70);
    insert_node(root, 60);
    insert_node(root, 80);

    inorder_traverse(root);

    return 0;
}

/// create a new node
Node* create_node(int key) {

    Node *new_node = new Node();
    //Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL) {

        printf("Overflow occurred !!!!\n");
        exit(1);
    }

    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

/// insertion a node into BST
Node* insert_node(Node* root, int key) {

    if(root == NULL) {

        root = create_node(key);
        return root;
    }

    if(key < root->key) root->left = insert_node(root->left, key);
    else if(key > root->key) root->right = insert_node(root->right, key);

    return root;
}

/// inorder traversal
void inorder_traverse(Node* root) {

    if(root == NULL) return ;

    inorder_traverse(root->left);
    printf("%d ", root->key);
    inorder_traverse(root->right);
}
