#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};

Node *deleteK(Node *,int);

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);

    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;

    *tail_ref = new_node;
}


int getMiddle(struct Node *head);


int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        int K;
        cin>>K;
        Node *res = deleteK(head,K);
        Node *temp = res;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}

Node* deleteK(Node *head,int K)
{
    int cnt = 1;
    Node* prev = head, *nhead = head;

    if(K > 1) {
        while(head != NULL) {
            if(cnt % K == 0) {
                prev->next = head->next;
                delete head;
                head = prev->next;
            }
            else {
                prev = head;
                head = head->next;
            }
            cnt++;
        }
    }

    if(K==1) nhead = NULL;
    return nhead;
}

