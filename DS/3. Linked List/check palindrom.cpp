#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* head = nullptr;

void insertEnd(int value);

bool isPalin(Node *head)
{
    Node *temp = head;

    stack<int> s;

    while (temp != NULL)
    {
        s.push(temp->data);

        temp = temp->next;
    }

    while (head != NULL)
    {
        int i = s.top();
        s.pop();
        if (head->data != i)
        {
            return false;
        }

        head = head->next;
    }

    return true;
}

int main()
{
    head = new Node();
    head->data = 1;
    head->next = nullptr;
    insertEnd(2);
    insertEnd(2);
    insertEnd(2);
    insertEnd(1);

    int result = isPalin(head);
    cout << (result ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}

void insertEnd(int value) {
    Node* temp = new Node();
    temp->data = value;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
    }
    else {
        Node* t = head;
        while (t->next != nullptr) {
            t = t->next;
        }
        t->next = temp;
    }
}
