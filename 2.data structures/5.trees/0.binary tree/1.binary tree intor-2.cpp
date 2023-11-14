/*
    Author: Mazharul Islam
            B.Sc. in CSE

    Program: Binary Tree intro

*/

#include<iostream>

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#include<math.h>
#include<limits.h>

#include<algorithm>
#include<string.h>
#include<utility>

#include<vector>
#include<list>
#include<forward_list>
#include<deque>

#include<stack>
#include<queue>

#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>

using namespace std;

typedef struct node Node;

struct node {

    int data;
    Node* left;
    Node* right;
};

Node* create_node(int);

void display_tree(Node*);

int main() {

    Node* root;

    root = create_node(11);
    root->left = create_node(9);
    root->right = create_node(13);

    root->left->left = create_node(5);
    root->left->right = create_node(7);

    root->right->left = create_node(15);
    root->right->right = create_node(17);

    display_tree(root);

    return 0;
}


Node* create_node(int data) {

    Node* new_node = (Node*)malloc(sizeof(Node));

    if(new_node == NULL) {
        printf("Overflow!!!!\n");
        exit(1);
    }

    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

/// preorder travarsal
void display_tree(Node* root) {

    if(root == NULL) return ;

    printf("%d ", root->data);

    display_tree(root->left);
    display_tree(root->right);
}
