//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

struct Qnode
{
    int data;
    Qnode* next;
    Qnode(int d){
        data = d;
        next = nullptr;
    }
};

struct Queue
{
    Qnode *front, *rear;
    Queue(){
        front = rear = nullptr;
    }

    void enque(int x){
        Qnode *temp = new Qnode(x);
        if(rear == nullptr){
            front = rear = temp;
            return;
        }else{
            rear ->next = temp;
            rear = temp;
        }
    }


    void deque(){
        if (front==nullptr) {
            return;
        }else{
            Qnode *temp = front;
           front = front ->next;

           if(front == nullptr){
            rear = nullptr;
           }

           delete(temp);
        }
    }
};




int main()
{

    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(12);
    q.enque(16);
    q.deque();
    cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
	cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
   return 0;
}