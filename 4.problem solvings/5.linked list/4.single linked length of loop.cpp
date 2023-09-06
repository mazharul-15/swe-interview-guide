#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;

    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;

        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);

        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin>> pos;
        loopHere(head,tail,pos);

        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    Node *s = head;
    Node *f = head;
    int flag = 0, cnt = 0;

    while(f != NULL && f->next != NULL) {

        s = s->next;
        f = f->next->next;

        if(s == f) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) return 0;

    head = s;
    do {
        cnt++;
        s = s->next;
    }while(head != s);

    return cnt;
}
