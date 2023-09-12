#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data%10;
        node = node->next;
    }
    cout<<"\n";
}


class Solution
{
    public:

    Node* reverse_list(Node *cur_node) {

        Node *next_node, *prev_node = NULL;

        while(cur_node != NULL) {
            next_node = cur_node->next;
            cur_node->next = prev_node;
            prev_node = cur_node;
            cur_node = next_node;
        }

        return prev_node;
    }

    Node* addOne(Node *head)
    {
        /// reversing the linked list
        head = reverse_list(head);

        /// add 1
        int carry = 1;
        Node* tmp = head;

        while(tmp != NULL) {

            tmp->data += carry;

            if(tmp->data > 9 && tmp->next == NULL) {

                Node* new_node = (Node*)malloc(sizeof(Node));

                tmp->data = 0;
                new_node->data = 1;
                new_node->next = NULL;

                tmp->next = new_node;
                carry = 0;
            }
            else if(tmp->data > 9 && tmp->next != NULL) {
                tmp->data = 0;
                carry = 1;
            }
            else carry = 0;

            tmp = tmp->next;
        }
        /// again reversing the linked list
        head = reverse_list(head);

        return head;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

