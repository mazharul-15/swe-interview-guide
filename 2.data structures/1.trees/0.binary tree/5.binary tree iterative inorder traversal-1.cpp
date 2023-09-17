/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU.

    Program: iterative inorder Traversal of Binary Tree
    TC: O(n)
    SC: O(1)

*/

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<limits.h>
#include<string.h>
#include<algorithm>
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

void iterative_inorder(Node*);


int main() {

    Node* root;

    root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);

    root->left->left = create_node(4);
    root->left->right = create_node(5);

    iterative_inorder(root);

    return 0;
}


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

void iterative_inorder(Node* root) {

    stack<Node*> st;
    Node *cur_node = root;

    while(true) {

        if(cur_node != NULL) {

            st.push(cur_node);
            cur_node = cur_node->left;
        }
        else {

            if(st.empty()) break;

            cur_node = st.top();
            st.pop();
            printf("%d ", cur_node->data);

            cur_node = cur_node->right;
        }
    }
}

