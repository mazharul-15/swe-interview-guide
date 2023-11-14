#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include<limits.h>
#include<string.h>
#include<algorithm>
#include<utility>
#include<vector>
#include<list>  /// doubly linked list
#include<forward_list>     /// single linked list
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

/// node of list
struct node {
    Node *prev;
    int data;
    Node *next;
};

class linked_list {
    public:

        Node* create_node(Node*, int , Node**);
        void display_list(Node*);
        void reverse_display(Node*);
        Node* insertion_middle(Node*);
        void insertion_after_node(int, int, Node*, Node**);
        void insertion_before_node(int, int, Node*, Node**);
};


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    List L;

    int n, val, node_val;

        scanf("%d", &n);
        while(n--) {
            scanf("%d", &val);
            tail = L.create_node(tail, val, &head);
        }

        printf("Main List: ");
        L.display_list(head);
        printf("Main List in reverse order: ");
        L.reverse_display(tail);

        printf("Enter two node 1st is node and 2nd new node value: ");
        scanf("%d %d", &node_val, &val);
        L.insertion_after_node(node_val, val, head, &tail);

        printf("Main List after adding node: ");
        L.display_list(head);
        printf("Main List in reverse order after adding node: ");
        L.reverse_display(tail);

        printf("Enter two node 1st is node and 2nd new node value: ");
        scanf("%d %d", &node_val, &val);
        L.insertion_before_node(node_val, val, head, &head);

        printf("Main List before adding node: ");
        L.display_list(head);
        printf("Main List in reverse order before adding node: ");
        L.reverse_display(tail);

    return 0;
}

/// creating a new node;
Node* List::create_node(Node* tail, int data, Node** head_ref) {

    Node *new_node = new Node();
    if(new_node == NULL) {
        printf("OVERFLOW!!!\n");
        exit(1);
    }

    new_node->prev = tail;
    new_node->data = data;
    new_node->next = NULL;

    if(*head_ref == NULL) *head_ref = new_node;
    else tail->next = new_node;

    return new_node;
}

/// insertion after a node
void List::insertion_after_node(int val, int data, Node* cur_node, Node** tail_ref) {

    while(cur_node != NULL) {

        if(cur_node->data == val) {

            Node *new_node = new Node();
            if(new_node == NULL) {
                printf("OVERFLOW!!!\n");
                exit(1);
            }

            new_node->data = data;
            /// checking if last node
            if(cur_node->next == NULL) {
                cur_node->next = new_node;
                new_node->prev = cur_node;
                new_node->next = NULL;

                *tail_ref = new_node;
            }
            else {
                cur_node->next->prev = new_node;
                new_node->next = cur_node->next;
                new_node->prev = cur_node;
                cur_node->next = new_node;
            }
            break;
        }
        cur_node = cur_node->next;
    }
}

/// insertion before a given node
void List::insertion_before_node(int val, int data, Node* cur_node, Node** head_ref){
     while(cur_node != NULL) {

        if(cur_node->data == val) {

            Node *new_node = new Node();
            if(new_node == NULL) {
                printf("OVERFLOW!!!\n");
                exit(1);
            }

            new_node->data = data;
            /// checking if head node
            if(cur_node->prev == NULL) {
                cur_node->prev = new_node;
                new_node->next = cur_node;
                new_node->prev = NULL;

                *head_ref = new_node;
            }
            else {
                cur_node->prev->next = new_node;
                new_node->prev = cur_node->prev;
                new_node->next = cur_node;
                cur_node->prev = new_node;
            }
            break;
        }
        cur_node = cur_node->next;
    }
}

/// display the linked list
void List::display_list(Node* cur_node) {

    while(cur_node != NULL) {

        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

/// display the linked list in reverse order

void List::reverse_display(Node *cur_node) {

    while(cur_node != NULL) {

        printf("%d ", cur_node->data);
        cur_node = cur_node->prev;
    }
    printf("\n");
}
