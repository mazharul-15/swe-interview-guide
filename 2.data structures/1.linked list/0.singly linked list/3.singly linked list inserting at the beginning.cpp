/*
    This Program is about inserting at the
    beginning into a singly linked list

*/
#include<iostream>
#include<conio.h>
#include<limits.h>
#include<math.h>
#include<utility> /// pair
#include<vector>
#include<list>  /// doubly linked list
#include<forward_list>  /// singly linked list
#include<deque> /// double ended queue
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
    Node *next;
};

Node *head = NULL;

/// function prototyping
Node *create_node(int , Node *);
void inserting_beginning(int);
void reverse_list(Node *);
void display(Node *);

/// Driver Code
int main() {

    Node *last_node = NULL;
    int n, val, delete_data;
    cin>> n;

    for(int i = 1; i <= n; i++) {
        cin>> val;
        last_node = create_node(val, last_node);
    }
    display(head);
    reverse_list(head);
    display(head);
    cin>> val;
    inserting_beginning(val);
    display(head);

    return 0;
}

/// creating node
Node *create_node(int data, Node *last_node) {
    Node *new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOW!!!\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL) head = new_node;
    else last_node->next = new_node;

    return new_node;
}

/// Printing the list
void display(Node *cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

/// reversing the list
void reverse_list(Node *cur_node) {
    Node *next_node, *prev_node = NULL;

    while(cur_node != NULL) {
        next_node = cur_node->next;
        cur_node->next = prev_node;
        prev_node = cur_node;
        cur_node = next_node;
    }
    head = prev_node;
}

/// inserting at the beginning
void inserting_beginning(int data) {
    Node *new_node = new Node();
    if(new_node == NULL) printf("OVERFLOW!!!\n");
    else {
        new_node->data = data;
        new_node->next = head;
        head = new_node;
    }
}
