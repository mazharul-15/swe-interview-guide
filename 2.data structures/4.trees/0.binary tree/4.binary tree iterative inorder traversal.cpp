/*
    Author: Mazharul Islam
            B.Sc. in CSE
            HSTU

    Program: Iterative Inorder Traversal of BT

    Method: Using stack & left-Child visit record(set)

    TC: O(n)
    SC: O(h) + O(n)
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

    //root->left->left = create_node(4);
    //root->left->right = create_node(3);
    //root->left->right->left = create_node(4);
    //root->left->right->right = create_node(5);

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

    Node *top;
    stack<Node*> st;
    set<Node*> visit;

    st.push(root);


    while(!st.empty()) {

        top = st.top();

        if(top->left==NULL || visit.find(top->left) != visit.end()) {

            st.pop();
            if(top->right != NULL) st.push(top->right);
            visit.insert(top);
            cout<< top->data << " ";
        }
        /*else if(visit.find(top->left) != visit.end()) {

            st.pop();
            if(top->right != NULL) st.push(top->right);
            visit.insert(top);
            cout<< top->data << " ";
        }*/
        else st.push(top->left);
    }
}
