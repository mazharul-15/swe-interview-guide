#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//typedef struct Queue Queue;

struct Queue {

    int cnt;
    int rear;
    int frnt;
    int capacity;
    int *arr;

    /*Queue(int c) {

        frnt = rear = cnt = 0;
        capacity = c;

        arr = (*int)malloc(c*sizeof(int));
    }*/
}q;

int push(int x) {

    if(q.cnt == q.capacity) return -1;
    q.arr[q.rear%q.capacity] = x;
    q.cnt++;
    q.rear++;

    return 1;
}

int pop() {

    if(q.cnt == 0) return 0;

    q.arr[q.frnt%q.capacity] = -1;
    q.frnt++;
    q.cnt--;
}

int top() {

    if(q.cnt == 0) return -1;

    int val = q.arr[q.frnt%q.capacity];
    return val;
}

int main() {

    //Queue q;
    int n, i;

    scanf("%d", &n);
    q.capacity = n;
    q.rear = q.frnt = q.cnt = 0;

    q.arr = malloc(n*sizeof(int));

    push(105);
    push(6);

    printf("%d\n", top());
    pop();
    printf("%d\n", top());

    return 0;
}
