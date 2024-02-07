// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define Q_SIZE 5

 struct Queue
{
    int data[Q_SIZE + 1];
    int head, tail;
} ;

void enqueue(Queue *q, int item)
{
    if ((q->tail + 1) % (Q_SIZE + 1) == q->head)
    {
        cout << "Queue is full!\n";
        return;
    }

    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);
}

int dequeue(Queue *q)
{
    int item;
    if (q->tail == q->head)
    {
        cout << "Queue is empty!";
        return -1;
    }

    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);

    return item;
}

int main()
{
    Queue my_q;
    my_q.head = 0;
    my_q.tail = 0;
    enqueue(&my_q, 1);
    cout << "Tail: " << my_q.tail << endl;
    enqueue(&my_q, 2);
    cout << "Tail: " << my_q.tail << endl;
    enqueue(&my_q, 3);
    cout << "Tail: " << my_q.tail << endl;
    enqueue(&my_q, 4);
    cout << "Tail: " << my_q.tail << endl;
    enqueue(&my_q, 5);
    cout << "Tail: " << my_q.tail << endl;
    enqueue(&my_q, 6);
    cout << "Tail: " << my_q.tail << endl;

    cout << "Begining of head: " << my_q.head << endl;
    int item = dequeue(&my_q);
    cout << "Item : " << item << endl;
    item = dequeue(&my_q);
    cout << "Item : " << item << endl;
    item = dequeue(&my_q);
    cout << "Item : " << item << endl;
    item = dequeue(&my_q);
    cout << "Item : " << item << endl;

    return 0;
}

/* In the given code for implementing a queue, the `Q_SIZE` is defined as 5, which represents the maximum number of elements the queue can hold. However, since we are using circular indexing to implement the queue, we need to have an extra space in the array to distinguish between the empty and full states of the queue.

Let's consider the scenario where `Q_SIZE` is defined as 5:
- The array `data` can store a maximum of 5 elements, indexed from 0 to 4.
- We use two pointers, `head` and `tail`, to keep track of the front and rear of the queue, respectively.

Now, why do we need `Q_SIZE + 1` in the code?
- In the circular queue implementation, we need an extra space to distinguish between the empty and full states.
- If `head` and `tail` are pointing to the same index, it indicates that the queue is empty.
- If `(tail + 1) % (Q_SIZE + 1) == head`, it indicates that the queue is full because the next index after `tail` is the `head` index.

By adding `Q_SIZE + 1`, we ensure that we have enough space in the array to handle the circular behavior of the queue and properly detect the empty and full states.

In summary, the extra space in the array (`Q_SIZE + 1`) is necessary for implementing a circular queue and correctly handling the empty and full states. */