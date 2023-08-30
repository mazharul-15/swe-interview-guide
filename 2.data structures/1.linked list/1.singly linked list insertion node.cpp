#include<iostream>
#include<limits.h>
#include<conio.h>
#include<algorithm>
#include<utility> // pair

/// sequence STL start
#include<vector>
#include<list>  /// doubly linked list
#include<forward_list>  /// single linked list
#include<deque>  /// doubly ended queue
/// sequence STL end

/// container adapter STL start
#include<stack>
#include<queue>
/// container adapter STL end

/// associate container STL start
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
/// associate container STL end

using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node *next;
};

Node *head;

Node *create_node(int , Node *);
void display(Node *);

int main() {

    Node *last_node;
    int n, data, delete_data;
    cin>> n;
    for(int i = 1; i <= n; i++) {
        cin>> data;
        last_node = create_node(data, last_node);
    }
    display(head);
    last_node = create_node(100, last_node);
    return 0;
}

Node *create_node(int data, Node *prev_node) {
    Node *new_node = new Node();

    if(new_node == NULL) {
        printf("Overflow!!\n");
        exit(1);
    }
    else if(head == NULL) {
        new_node->data = data;
        new_node->next = NULL;
        head = new_node;
    }
    else {
        new_node->data = data;
        new_node->next = NULL;
        prev_node->next = new_node;
    }

    return new_node;
}

void display(Node *cur_node) {
    while(cur_node != NULL) {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
}

