/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU.

    Program: Level Order traversal printing level by level

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

void level_order(Node*, vector<vector<int>> &ans);


int main() {

    Node* root;

    root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);

    root->left->left = create_node(4);
    root->left->right = create_node(5);

    root->right->left = create_node(6);
    root->right->right = create_node(7);

    vector<vector<int>> ans;
    level_order(root, ans);

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) cout<< ans[i][j] << " ";
        cout<< endl;
    }

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

void level_order(Node* root, vector<vector<int>> &ans) {

    vector<int> v;
    queue<Node*> q;
    int sz;

    q.push(root);

    while(!q.empty()) {
        sz = q.size();

        for(int i = 0; i < sz; i++) {
            root = q.front();
            v.push_back(root->data);
            q.pop();

            if(root->left != NULL) q.push(root->left);
            if(root->right != NULL) q.push(root->right);
        }

        ans.push_back(v);
        v.clear();
    }
}

