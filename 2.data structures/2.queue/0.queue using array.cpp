#include<iostream>
using namespace std;

struct Queue {

    int cnt;
    int rear;
    int frnt;
    int capacity;
    int *arr;

    Queue(int c) {

        frnt = rear = cnt = 0;
        capacity = c;

        arr = (*int)malloc(c*sizeof(int));
    }
};

bool push(int x) {
    if()
}


int main() {

    int

    return 0;
}
