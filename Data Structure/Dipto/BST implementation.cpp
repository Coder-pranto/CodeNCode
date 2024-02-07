// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* root;

//* BST implenmentation
void insert(int value)  
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    if (root == nullptr)
    {
        root = newNode;
    }
    else
    {
        Node *temp = root;
        while (1)
        {
            if (newNode->data <= temp->data)
            {
                if (temp->left == nullptr)
                {
                    temp->left = newNode;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == nullptr)
                {
                    temp->right = newNode;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

//* DFS traversal (preorder, inorder, postorder)

void preOrder(Node *r)
{
    if (r == nullptr)
    {
        return;
    }
    cout << r->data << ' ';
    preOrder(r->left);
    preOrder(r->right);
}
void inOrder(Node *r)
{
    if (r == nullptr)
    {
        return;
    }

    preOrder(r->left);
    cout << r->data << ' ';
    preOrder(r->right);
}
void postOrder(Node *r)
{
    if (r == nullptr)
    {
        return;
    }

    preOrder(r->left);
    preOrder(r->right);
    cout << r->data << ' ';
}


//* BFS level order traversal
void levelOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->data << " ";

        if (node->left != nullptr)
            q.push(node->left);
        if (node->right != nullptr)
            q.push(node->right);
    }
}

int main() {

    root = nullptr;
    insert(55);
    insert(40);
    insert(80);
    insert(34);
    insert(28);
    insert(38);
    insert(60);
    insert(90);
    preOrder(root);
    cout << "\n";
    inOrder(root);
    cout << "\n";
    postOrder(root);
    cout << "\n";
    levelOrder(root);

    return 0;
}


