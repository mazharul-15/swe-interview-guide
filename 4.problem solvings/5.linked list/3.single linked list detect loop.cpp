/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU
    Program: detection loop
*/

#include<iostream>
#include<limits.h>
#include<algorithm>
#include<utility>
#include<vector>
#include<list>  /// doubly linked list
#include<forward_list> /// singly linked list
#include<deque>   /// double ended queue
#include<stack>
#include<queue>     /// queue + priority_queue
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>

using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node *next;
    int flag;
};


Node *create_node(int , Node *, Node**);

void creation_loop(Node*, int, Node*);

bool detection_loop(Node*);

void display_list(Node*);

int main() {
    Node *cur_node, *head;
    cur_node = head = NULL;

    int n, val;
    /// no. of node input
    cin>> n;
    /// creation node
    for(int i = 1; i <= n; i++) {
        cin>> val;
        cur_node = create_node(val, cur_node, &head);
    }
    /// display the linked list
    display_list(head);

    /// creation loop
    int pos;
    cin>> pos;
    /// passing: head, pos, cur_node=tail_node;
    creation_loop(head, pos, cur_node);
    ///display_list(head);

    (detection_loop(head)) ? cout<< "\nYES\n" : cout<< "\nNO\n";

    return 0;
}

/// adding single node to the linked list
Node *create_node(int data, Node *cur_node, Node** head_ref) {
    Node *new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOw!!!");
        exit(1);
    }
    else {
        new_node->data = data;
        new_node->next = NULL;
        new_node->flag = 0;  /// for detection loop

        if(*head_ref == NULL) *head_ref = new_node;
        else cur_node->next = new_node;

        return new_node;
    }
}


/// printing the linked list
void display_list(Node *cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

/// creation loop into linked list
void creation_loop(Node* head, int pos, Node* tail) {

    if(pos == 0) return;
    for(int i = 1; i < pos; i++) {
        printf("%d ", head->data);
        head = head->next;
    }
    tail->next = head;

}

/// detection loop
bool detection_loop(Node* cur_node) {

    while(cur_node != NULL) {

        if(cur_node->flag == 1) return true;
        cur_node->flag = 1;
        cur_node = cur_node->next;
    }

    return false;
}
