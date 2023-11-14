
/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU.

    Program: binary Tree

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

int balanced_BT(Node*);


int main() {

    Node* root;

    root = create_node(1);
    root->left = create_node(2);
    //root->right = create_node(3);

    root->left->left = create_node(4);
    root->left->right = create_node(5);

    if(balanced_BT(root) > -1) cout<< "Yes\n";
    else cout<< "NO\n";
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

int balanced_BT(Node *root) {

    if(root == NULL) return 0;

    int LH = balanced_BT(root->left) + 1;
    int RH = balanced_BT(root->right) + 1;

    if(LH == -1 || RH == -1) return  -1;
    if(abs(LH -RH)>1) return -1;

    return max(LH, RH);
}
