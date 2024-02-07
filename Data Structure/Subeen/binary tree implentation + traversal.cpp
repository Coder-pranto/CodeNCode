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

Node *create_node(int item)
{
    Node *new_node = new Node();
    if (new_node == nullptr)
    {
        cout << "Error! Could not create a new node." << endl;
        exit(1);
    }
    new_node->data = item;
    new_node->left = nullptr;
    new_node->right = nullptr;

    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two, seven);
    add_right_child(two, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);
    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);
    Node *eight = create_node(8);

    add_right_child(nine, eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return two;
}

void pre_order(Node *node)
{

    if (node == nullptr)
    {
        return;
    }
    cout << (node->data) << " ";
    pre_order(node->left);
    pre_order(node->right);
}

void post_order(Node *node)
{

    if (node == nullptr)
    {
        return;
    }
    post_order(node->left);
    post_order(node->right);

    cout << (node->data) << " ";
}

void in_order(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    in_order(node->left);
    cout << (node->data) << " ";
    in_order(node->right);
}

int main()
{

    Node *root = create_tree();
    cout << "Root :" << (root->data) << "\n";

    cout << "Pre order traversal :";
    pre_order(root);
    cout << "\n";

    cout << "Post order traversal :";
    post_order(root);
    cout << "\n";

    cout << "In order traversal :";
    in_order(root);
    cout << "\n";

    return 0;
}

//C-style
//BISMILLAHIR RAHMANIR RAHIM
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")
// #include <bits/stdc++.h>
// using namespace std;


// typedef struct node Node;

// struct node
// {
//     int data;
//     Node *left;
//     Node *right;
// };

// Node *create_node(int item)
// {
//    Node *new_node = (Node*)malloc(sizeof(Node));

//     if(new_node == NULL)
//         {
//             cout<<"Error! Could not create a New Node"<<endl;
//             exit(1);
//         }
//     new_node->data = item;
//     new_node->left = NULL;
//     new_node->right = NULL;


//     return new_node;
// }

// void add_left_child(Node*node,Node*child)
// {
//     node->left = child;
// }

// void add_right_child(Node*node,Node*child)
// {
//     node->right = child;
// }


// Node *create_tree()
// {
//     Node *two = create_node(2);
//     Node *seven = create_node(7);
//     Node *nine = create_node(9);
//     add_left_child(two,seven);
//     add_right_child(two, nine);

//     Node *one = create_node(1);
//     Node *six = create_node(6);
//     add_left_child(seven,one);
//     add_right_child(seven,six);
//     Node *five = create_node(5);
//     Node *ten = create_node(10);
//     add_left_child(six,five);
//     add_right_child(six,ten);
//     Node *eight = create_node(8);

//     add_right_child(nine,eight);

//     Node *three = create_node(3);
//     Node *four = create_node(4);
//     add_left_child(eight,three);
//     add_right_child(eight,four);

//     return two;

// }

// void pre_order(Node*node)
// {
//     cout<<(node->data)<<" ";
//     if(node->left != NULL)
//         {
//             pre_order(node->left);
//         }

//     if(node->right != NULL)
//         {
//             pre_order(node->right);
//         }
// }

// void post_order(Node*node)
// {

//     if(node->left != NULL)
//         {
//             post_order(node->left);
//         }

//     if(node->right != NULL)
//         {
//             post_order(node->right);
//         }

//     cout<<(node->data)<<" ";
// }


// void in_order(Node*node)
// {

//     if(node->left != NULL)
//         {
//             in_order(node->left);
//         }

//     cout<<(node->data)<<" ";

//     if(node->right != NULL)
//         {
//             in_order(node->right);
//         }

// }


// int main()
// {


//     Node *root = create_tree();
//     cout<<"Root :"<<(root->data)<<"\n";



//     cout<<"Pre order traversal :";
//     pre_order(root);
//     cout<<"\n";

//     cout<<"Post order traversal :";
//     post_order(root);
//     cout<<"\n";


//     cout<<"In order traversal :";
//     in_order(root);
//     cout<<"\n";


//     return 0;
// }

