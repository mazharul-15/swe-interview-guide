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
};


Node *create_node(int , Node *, Node**);
void display_list(Node *&);

int main() {
    Node *cur_node, *head;
    cur_node = head = NULL;

    int n, val;
    cin>> n;

    for(int i = 1; i <= n; i++) {
        cin>> val;
        cur_node = create_node(val, cur_node, &head);
    }

    display_list(head);

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

        if(*head_ref == NULL) *head_ref = new_node;
        else cur_node->next = new_node;

        return new_node;
    }
}


/// printing the linked list
void display_list(Node *&cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}
