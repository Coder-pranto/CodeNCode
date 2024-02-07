

// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = right = nullptr;
    }
};


Node *root;

void insert(int value)
{
    Node *newNode = new Node(value);
    if (!root)
    {
        root = newNode; // if tree is empty make the node as root
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

    inOrder(r->left);
    cout << r->data << ' ';
    inOrder(r->right);
}
void postOrder(Node *r)
{
    if (r == nullptr)
    {
        return;
    }

    postOrder(r->left);
    postOrder(r->right);
    cout << r->data << ' ';
}

// BFS traversal (level order)
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
        {
            q.push(node->left);
        }
        if (node->right != nullptr)
        {
            q.push(node->right);
        }
    }
}

Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}



int main()
{

    root = nullptr;
    insert(55);
    insert(40);
    insert(80);
    insert(34);
    insert(28);
    insert(38);
    insert(60);
    insert(90);

    cout << "The BST: " <<root ->data<< endl;
    // print(root);

    // preOrder(root);
    // cout << "\n";
    // inOrder(root);
    // cout << "\n";
    // postOrder(root);
    // cout << "\n";
    levelOrder(root);

    Node* result = searchInBST(root, 4);

    if (result == nullptr) {
        cout << "Key not found in the BST." << endl;
    }
    else {
        cout << "Key found in the BST." << endl;
    }

    // deleteNode(34, root);
    // cout << "The BST: " << endl;
    // print(root);

    return 0;
}
