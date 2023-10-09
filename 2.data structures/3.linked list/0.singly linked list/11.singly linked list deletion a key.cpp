/*
    This program will find a node into a linked list
    using recursive method

    Time Complexity: O(n);
    Space Complexity: O(n);

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
Node *deletion_key(Node *, int);
void display_list(Node *);

int main() {

    Node *cur_node, *head = NULL;

    int n, val;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &val);
        cur_node = create_node(val, cur_node, &head);
    }
    /// linked list
    display_list(head);

    cout<< "Give a key to be deleted: ";
    scanf("%d", &val);

    //bool status = searching_node(val, head);
    //cout<< "Value: "<< status << endl;
    //if(status) printf("YES\n");
    //else printf("NO\n");
    head = deletion_key(head , val);
    if(head == NULL) cout<< "YES\n";
    display_list(head);

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

/// searching a node using recursion
bool searching_node(int data, Node *cur_node) {

    if(cur_node == NULL) return false;

    if(cur_node->data == data) return true;
    else return searching_node(data, cur_node->next);

}

/// deletion a given key
Node *deletion_key(Node *cur, int key) {

    if(cur->data == key) return cur->next;
    if(cur == NULL) return cur;

    cur->next = deletion_key(cur->next, key);
}

/// printing the linked list
void display_list(Node *cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}


