#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insertIntoBST(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }
    if (key < root->data) {
        root->left = insertIntoBST(root->left, key);
    }
    else {
        root->right = insertIntoBST(root->right, key);
    }
    return root;
}

Node* searchInBST(Node* root, int key) {
    if (root == nullptr) {
        return nullptr;
    }
    if (root->data == key) {
        return root;
    }
    if (root->data > key) {
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}

Node *inorderSucc(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
} 

Node *deleteInBST(Node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteInBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)// 1 child at right
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)// 1 child at left
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;

    // Insert elements into the BST
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 3);
    root = insertIntoBST(root, 7);
    root = insertIntoBST(root, 2);
    root = insertIntoBST(root, 4);
    root = insertIntoBST(root, 6);
    root = insertIntoBST(root, 8);

    int key = 8;

    // Search for the key in the BST
    Node* result = searchInBST(root, key);

    if (result == nullptr) {
        cout << "Key not found in the BST." << endl;
    }
    else {
        cout << "Key found in the BST." << endl;
    }

    // Delete the key from the BST
    root = deleteInBST(root, key);

    cout << "BST after deletion: ";
  

    return 0;
}
