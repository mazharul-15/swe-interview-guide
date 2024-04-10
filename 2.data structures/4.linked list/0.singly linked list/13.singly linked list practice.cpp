#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node *next;
};


Node *nodeCreation(int data, Node **head, Node *cur_node);
void linkedListPrint(Node *head);


int main()
{
    int n, data;
    Node *head = NULL;
    Node *cur_node;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        cur_node = nodeCreation(data, &head, cur_node);
    }

    linkedListPrint(head);

    return 0;
}

Node *nodeCreation(int data, Node **head, Node *cur_node)
{
    Node *new_node = new Node();

    new_node->data = data;
    new_node->next = NULL;

    if(*head == NULL) *head = new_node;
    else cur_node->next = new_node;

    return new_node;

};

void linkedListPrint(Node *head)
{
    while(head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
