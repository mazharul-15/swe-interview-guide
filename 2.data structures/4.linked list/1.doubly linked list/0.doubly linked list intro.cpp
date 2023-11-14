/*
    Author: Mazharul Islam
            CSE, HSTU

    Program: doubly linked list
*/

#include<iostream>
#include<conio.h>
#include<fstream>
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
typedef class linked_list List;

struct node {
    Node* prev;
    int data;
    Node* next;
};

class linked_list {
    public:
        Node* create_node(Node*, int, Node**);
        void display_list(Node*);
        void reverse_display_list(Node*);
};


int main() {

    Node *head = NULL, *tail = NULL;
    List L1;

    int n, val;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &val);
        tail = L1.create_node(tail, val, &head);
    }

    L1.display_list(head);
    L1.reverse_display_list(tail);


    return 0;
}


Node* List::create_node(Node* prev_node, int data, Node** head_ref) {

    Node* next_node = new Node();

    if(next_node == NULL) {
        printf("OVERFLOW!!!!\n");
        exit(1);
    }

    next_node->prev = prev_node;
    next_node->data = data;
    next_node->next = NULL;

    if(*head_ref == NULL) *head_ref = next_node;
    else prev_node->next = next_node;

    return next_node;
}

void List::display_list(Node* cur_node) {

    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

void List::reverse_display_list(Node* cur_node) {

    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->prev;
    }

    printf("\n");
}

