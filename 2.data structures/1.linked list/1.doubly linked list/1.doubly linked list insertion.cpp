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
};


int main() {

    Node* head = NULL;
    Node* tail = NULL;

    List L;

    int n, val;

        scanf("%d", &n);
        while(n--) {
            scanf("%d", &val);
            tail = L.create_node(tail, val, &head);
        }

        L.display_list(head);
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

