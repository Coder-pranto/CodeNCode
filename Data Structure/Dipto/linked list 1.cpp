// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define el "\n"

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head;

void print()
{
    Node *temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }

    puts("");
}

void insertEnd(int value)
{
    Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *t;
        t = head;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void insertStart(int value)
{
    Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = head;
    head = temp;
}

void insertSort(int value)
{
    Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;
    if (head == NULL || temp->data < head->data)
    {
        temp->link = head;
        head = temp;
    }
    else
    {
        Node *pred = head;
        Node *p = pred->link;
        while (p != NULL && temp->data > p->data)
        {
            pred = p;
            p = p->link;
        }
        pred->link = temp;
        temp->link = p;
    }
}

void deleteNode(int position)
{
    if (position == 1)
    {
        Node *temp;
        temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        Node *t1;
        t1 = head;
        for (int i = 1; i <= position - 2; i++)
        {
            t1 = t1->link;
        }
        Node *t2;
        t2 = t1->link;
        t1->link = t2->link;
        free(t2);
    }
}
int main()
{
    // pre insertion in a linked list
    head = NULL;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 2;
    head->link = (struct Node *)malloc(sizeof(struct Node));
    head->link->data = 3;
    head->link->link = (struct Node *)malloc(sizeof(struct Node));
    head->link->link->data = 4;
    head->link->link->link = NULL;
    print();
    // pre insertion completed

    insertEnd(5);
    insertEnd(6);
    insertEnd(8);
    print();
    insertStart(1);
    print();

    insertSort(7);
    insertSort(0);
    cout<<"new: ";
    print();

    deleteNode(3);
    cout<<"After deletion: ";
    print();
    deleteNode(1);
    cout<<"After delete 1st position: ";
    print();

    return 0;
}
