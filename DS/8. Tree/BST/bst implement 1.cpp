

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
};

Node *root;

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

//* serach a node
bool search_node(int value)
{
    Node *temp = root;
    while (temp != nullptr)
    {
        if (value == temp->data)
        {
            return true;
        }
        else if (value < temp->data)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    return false;
}

//* Delete Node(recursive function)

void deleteNode(int key, Node *&root)
{
    if (root == nullptr)
    {
        // Node not found
        return;
    }

    if (key < root->data)
    {
        deleteNode(key, root->left);
    }
    else if (key > root->data)
    {
        deleteNode(key, root->right);
    }
    else
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            // Case 1: Node has no children
            delete root;
            root = nullptr;
        }
        else if (root->left == nullptr)
        {
            // Case 2: Node has one child on the right
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == nullptr)
        {
            // Case 3: Node has one child on the left
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        else
        {
            // Case 4: Node has two children
            Node *successor = root->right;
            while (successor->left != nullptr)
            {
                successor = successor->left;
            }
            root->data = successor->data;
            deleteNode(successor->data, root->right);
        }
    }
}

//*printing BST
void print(Node *r)
{
    if (r == nullptr)
    {
        return;
    }

    cout << r->data << ":";
    if (r->left != nullptr)
    {
        cout << " L" << r->left->data;
    }
    if (r->right != nullptr)
    {
        cout << " R" << r->right->data;
    }
    cout << "\n";

    print(r->left);
    print(r->right);
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

    cout << "The BST: " << endl;
    print(root);

    // preOrder(root);
    // cout << "\n";
    // inOrder(root);
    // cout << "\n";
    // postOrder(root);
    // cout << "\n";
    // levelOrder(root);

    cout << "Is this node in the BST: " << search_node(90) << endl;
    deleteNode(34, root);
    cout << "The BST: " << endl;
    print(root);

    return 0;
}
