#include<bits/stdc++.h>
using namespace std;

void priorityQueue(string &str, priority_queue<char> &pq) {

    for(int i = 0; str[i]; i++) pq.push(str[i]);

        while(!pq.empty()) {
            char topElement = pq.top();
            pq.pop();

            cout<< topElement << " ";
        }

}

int main() {

    string str;
    priority_queue<char> pq;

    int t;
    cin>> t;

    while(t--) {
        cin>> str;
        priorityQueue(str, pq);
        cout<< " ";
    }

    return 0;
}
