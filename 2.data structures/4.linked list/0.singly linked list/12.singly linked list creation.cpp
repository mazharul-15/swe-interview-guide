#include<bits/stdc++.h>

using namespace std;

typedef struct node Node;

struct node {

    int data;
    Node *next;

};

Node* create_node(int data, Node *cur_node, Node **head_ref) {

    Node *new_node = new Node();

    if(new_node == NULL) {

        printf("overflow!!!!\n");
        exit(1);
    }

    new_node->data = data;
    new_node->next = NULL;

    if(*head_ref == NULL) *head_ref = new_node;
    else cur_node->next = new_node;

    return new_node;
}

void display_list(Node* cur_node) {

    while(cur_node != NULL) {

        cout<< cur_node->data << " ";
        cur_node = cur_node->next;
    }
}

int main() {

    Node *head = NULL;
    Node *last_node;

    int n, i, val;
    cin>> n;
    for(i = 1; i <= n; i++) {
        cin>> val;
        last_node = create_node(val, last_node, &head);
    }

    display_list(head);

    return 0;
}
