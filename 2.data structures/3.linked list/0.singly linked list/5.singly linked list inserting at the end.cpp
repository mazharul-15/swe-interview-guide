
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
void inserting_after_given_node(int, int);
void inserting_at_end(int, Node *);
void reverse_list(Node *);
void display(Node *);

/// Driver Code
int main() {

    Node *last_node = NULL;
    int n, val, delete_data, after_node_val;
    cout<< "Enter the number of node: ";
    cin>> n;

    for(int i = 1; i <= n; i++) {
        cin>> val;
        last_node = create_node(val, last_node);
    }

    cout<< "Main Linked List: ";
    display(head);
    /*
    reverse_list(head);
    cout<< "After reversing List: ";
    display(head);

    cout<< "Enter a value which will be inserted at the head: ";
    cin>> val;
    inserting_beginning(val);
    cout<< "After inserting at beginning: ";
    display(head);

    cout<< "Enter two value 1st is value that will be inserted\n 2nd the node: ";
    cin>> val >> after_node_val;
    inserting_after_given_node(val, after_node_val);
    cout<< "After inserting at after given node: ";
    display(head);
    */
    cout<< "Enter a value which will be inserted at the end: ";
    cin>> val;
    inserting_at_end(val, head);
    cout<< "After inserting at the end: ";
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

/// inserting a node after a given node;
void inserting_after_given_node(int val, int after_node_val) {
    Node *cur_node = head;
    int flag = 0;

    while(cur_node != NULL) {

        if(cur_node->data == after_node_val) {
            Node *new_node = new Node();
            if(new_node == NULL) printf("OVERFLOW!!!\n");
            else {
                new_node->data = val;
                new_node->next = cur_node->next;
                cur_node->next = new_node;

                flag = 1;
                break;
            }
        }
        cur_node = cur_node->next;
    }
    if(flag == 0) printf("Node is not found!!!\n");
}


/// inserting at the end
void inserting_at_end(int data, Node *cur_node) {
    while(cur_node != NULL) {

        if(cur_node->next == NULL) {
            Node *new_node = new Node();
            if(new_node == NULL) {
                printf("OVERFLOW!!\n");
                break;
            }
            else {
                new_node->data = data;
                new_node->next = NULL;
                cur_node->next = new_node;
                cur_node = new_node;
            }
        }
        cur_node = cur_node->next;
    }
}
