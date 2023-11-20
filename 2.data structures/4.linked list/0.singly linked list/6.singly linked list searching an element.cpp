/*
    This program will find a node into a linked list
    Time Complexity: O(n);
    Space Complexity: O(1);

)*/
#include<iostream>
#include<limits.h>
#include<algorithm>
#include<utility>   /// pair
#include<vector>
#include<list>      /// doubly linked list
#include<forward_list> /// singly linked list
#include<deque>     /// double ended queue
#include<stack>
#include<queue>     /// queue + priority_queue
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>

using namespace std;

typedef class node Node;

class node {
    public:
        int data;
        Node *next;
};

Node *create_node(int , Node *, Node**);
bool searching_node(int , Node *);
void display_list(Node *);

int main() {

    Node *cur_node, *head = NULL;

    int n, val;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &val);
        cur_node = create_node(val, cur_node, &head);
    }

    scanf("%d", &val);

    bool status = searching_node(val, head);
    if(status) printf("YES\n");
    else printf("NO\n");
    ///display_list(head);
    return 0;
}

/// creating node
Node *create_node(int data, Node *cur_node, Node** head_ref) {
    Node *new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOW!!!\n");
        exit(1);
    }

    new_node->data = data;
    new_node->next = NULL;

    if(*head_ref == NULL) *head_ref = new_node;
    else cur_node->next = new_node;

    return new_node;
}

/// searching a node
bool searching_node(int data, Node *cur_node) {
    while(cur_node != NULL) {
        if(cur_node->data == data) return true;
        cur_node = cur_node->next;
    }

    return false;
}

/// printing the linked list
void display_list(Node *cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}
