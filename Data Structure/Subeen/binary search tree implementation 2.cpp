


void deleteNode(int value)  
{
    Node *parent = nullptr;
    Node *current = root;
    while (current != nullptr && current->data != value)
    {
        parent = current;
        if (value < current->data)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    if (current == nullptr)
    {
        // Node with given value not found
        return;
    }
    // Case 1: Node has no children
    if (current->left == nullptr && current->right == nullptr)
    {
        if (current == root)
        {
            root = nullptr;
        }
        else if (current == parent->left)
        {
            parent->left = nullptr;
        }
        else
        {
            parent->right = nullptr;
        }
        delete current;
    }
    // Case 2: Node has one child
    else if (current->left == nullptr)
    {
        if (current == root)
        {
            root = current->right;
        }
        else if (current == parent->left)
        {
            parent->left = current->right;
        }
        else
        {
            parent->right = current->right;
        }
        delete current;
    }
    else if (current->right == nullptr)
    {
        if (current == root)
        {
            root = current->left;
        }
        else if (current == parent->left)
        {
            parent->left = current->left;
        }
        else
        {
            parent->right = current->left;
        }
        delete current;
    }
    // Case 3: Node has two children
    else
    {
        Node *successor = current->right;
        while (successor->left != nullptr)
        {
            successor = successor->left;
        }
        int successorData = successor->data;
        deleteNode(successorData);
        current->data = successorData;
    }
}


/* The deleteNode function takes an integer value as its argument, representing the value of the node that we want to delete from the Binary Search Tree.

The function first traverses the tree to find the node with the given value, while keeping track of its parent. If the node is not found, the function returns.

If the node is found, there are three cases to consider:

    Case 1: Node has no children. In this case, we simply delete the node and update its parent's pointer to it.
    Case 2: Node has one child. In this case, we update the parent's pointer to the node's child, and then delete the node.
    Case 3: Node has two children. In this case, we find the node's inorder successor (i.e., the node with the smallest value in the node's right subtree), delete it recursively, and replace the node's value with the successor's value. This maintains the Binary Search Tree property. */

