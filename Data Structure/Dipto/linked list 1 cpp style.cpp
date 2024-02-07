#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* head = nullptr;

void print() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
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

void insertStart(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->link = head;
    head = temp;
}

void insertSort(int value)
{
    Node *temp =  new Node();
    temp->data = value;
    temp->link = nullptr;
    if (head == nullptr || temp->data < head->data)
    {
        temp->link = head;
        head = temp;
    }
    else
    {
        Node *pred = head;
        Node *p = pred->link;
        while (p != nullptr && temp->data > p->data)
        {
            pred = p;
            p = p->link;
        }
        pred->link = temp;
        temp->link = p;
    }
}

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

int main() {
    // pre insertion in a linked list
    head = new Node();
    head->data = 2;
    head->link = new Node();
    head->link->data = 3;
    head->link->link = new Node();
    head->link->link->data = 4;
    head->link->link->link = nullptr;
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
    cout << "After deletion: ";
    print();
    deleteNode(1);
    cout << "After delete 1st position: ";
    print();

    return 0;
}
