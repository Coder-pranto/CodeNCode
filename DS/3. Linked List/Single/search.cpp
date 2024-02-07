
//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define r0 return 0
#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

struct Node {
    int data;
    Node* link;
};

Node* head = nullptr;

void insertStart(int value);
void insertEnd(int value);
void insertAfter(int prev_node_data, int new_data);
void print() ;


bool search(Node* head, int x)
{
    Node* current = head; 
    while (current != nullptr) {
        if (current->data == x)
            return true;
        current = current->link;
    }
    return false;
}


int main()
{
    optimize();


    head = new Node();
    head->data = 2;
    // head->link = new Node();

    insertEnd(5);
    insertEnd(6);
    insertEnd(8);
    print();
    insertStart(1);
    print();

    insertAfter(5, 100);
    print();

    search(head, 100) ? cout << "Yes" : cout << "No";

    r0;
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
