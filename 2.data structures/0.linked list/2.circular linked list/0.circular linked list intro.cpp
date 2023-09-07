/*
    Author: Mazharul Islam
            B.Sc. in CSE, HSTU.

    Program: Circular Linked List Introduction
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<algorithm>
#include<utility>

using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node* next;
};

Node* create_node(Node**, int, Node*);

void display_list(Node*);

int main() {

    Node *head = NULL;
    Node *tail;

    int n, data;
    scanf("%d", &n);

    while(n--) {
        cin>> data;
        tail = create_node(&head, data, tail);
    }

    display_list(head);

    return 0;
}


Node* create_node(Node** head_ref, int data, Node* tail) {

    Node* new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOW!!!\n");
        exit(1);
    }

    new_node->data = data;

    if(*head_ref == NULL) {
        *head_ref = new_node;
        new_node->next = *head_ref;
    }
    else {
        new_node->next = tail->next;
        tail->next = new_node;
    }

    return new_node;
}

void display_list(Node* head) {

    Node* cur_node = head;
    /*
    while(cur_node != NULL) {

        printf("%d ", cur_node->data);
        cur_node = cur_node->next;

        if(cur_node == head) cur_node = NULL;
    }*/

    if(head != NULL) {
       do {

            printf("%d ", cur_node->data);
            cur_node = cur_node->next;

        }while(cur_node != head);
    }

}
