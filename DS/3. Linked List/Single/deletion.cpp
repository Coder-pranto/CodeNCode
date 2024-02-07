//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = nullptr;

void insertStart(int value);
void insertEnd(int value);
void insertAfter(int prev_node_data, int new_data);
void print() ;


void deleteNode(int position) {
    if (position == 1) {
        Node* temp = head;
        head = head->link;
        delete temp;
    }
    else {
        Node* t1 = head;
        for (int i = 1; i <= position - 2; i++) {
            t1 = t1->link;
        }
        Node* t2 = t1->link;
        t1->link = t2->link;
        delete t2;
    }
}



int main()
{
 
    head = new Node();
    head->data = 2;
    // head->link = new Node();

    insertEnd(5);
    insertEnd(6);
    insertEnd(8);
    insertStart(1);
    insertAfter(5, 100);
    print();


    deleteNode(4);
    cout << "After deletion: ";
    print();
    deleteNode(1);
    cout << "After delete 1st position: ";
    print();

    return 0;
}


void insertStart(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->link = head;
    head = temp;
}

void insertEnd(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->link = nullptr;
    if (head == nullptr) {
        head = temp;
    }
    else {
        Node* t = head;
        while (t->link != nullptr) {
            t = t->link;
        }
        t->link = temp;
    }
}

void insertAfter(int prev_node_data, int new_data)
{

    Node *t = head;
    while (t->data != prev_node_data)
    {
        t = t->link;
    }

    if (t->link == nullptr)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }
    else
    {
        Node *new_node = new Node();
        new_node->data = new_data;

        new_node->link = t->link;

        t->link = new_node;
    }
}

void print() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
