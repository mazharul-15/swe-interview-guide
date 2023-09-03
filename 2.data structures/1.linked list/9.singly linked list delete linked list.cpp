#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<fstream>
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

///typedef class linked_list_function List;
typedef struct node Node;
typedef class linked_list_function List;

struct node {
    int data;
    Node *next;
};

class linked_list_function {

    public:

        Node* create_node(int , Node* , Node** );
        void display_list(Node* );
        Node* delete_list(Node* );
};

int main() {

    Node *head = NULL, *tail;
    List linked_list;
    int n, val;
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &val);
        tail = linked_list.create_node(val, tail, &head);
    }
    linked_list.display_list(head);
    head = linked_list.delete_list(head);
    linked_list.display_list(head);

    return 0;
}


/// function definition
Node* List::create_node(int data, Node *tail, Node **head_ref) {

    Node *new_node = new Node();

    if(new_node == NULL) {
        printf("OVERFLOW!!\n");
        exit(1);
    }

    new_node->data = data;
    new_node->next = NULL;

    if(*head_ref == NULL) *head_ref = new_node;
    else tail->next = new_node;

    return new_node;
}

void List:: display_list(Node *cur_node) {

    if(cur_node == NULL) printf("The Linked List is empty!!!!");
    while(cur_node != NULL) {

        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
    printf("\n");
}

Node* List::delete_list(Node *cur_node) {

    Node *next_node = new Node();

    while(cur_node != NULL) {
        next_node = cur_node->next;
        delete cur_node;
        cur_node = next_node;
    }
    return cur_node;
}

