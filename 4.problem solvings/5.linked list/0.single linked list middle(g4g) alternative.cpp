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
        cout << node->data <<" ";
        node = node->next;
    }
    cout<<"\n";
}

class Solution{
    public:
    int getMiddle(Node *head)
    {
        if(head == NULL) return -1;

        Node *mid = head;
        int cnt = 0; /// count variable

        while(head != NULL) {

            if(cnt & 1) mid = mid->next;

            cnt++;
            head = head->next;
        }

        return mid->data;
    }
};


int main() {

    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}
