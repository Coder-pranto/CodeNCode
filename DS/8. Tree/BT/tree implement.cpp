// //BISMILLAHIR RAHMANIR RAHIM
// #include <bits/stdc++.h>
// using namespace std;

// #define el "\n"
// #define r0 return 0
// #define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)




// struct Node
// {
//     int data;
//     Node *left, *right;
//     Node(int d){
//         data = d;
//         left = right = nullptr;

//     }
// };

// Node* create_tree_node( int val){
   
//    Node *newNode = new Node(val);
//     if (newNode == nullptr)
//     {
//         cout << "Error! Could not create a new node." << endl;
//         exit(1);
//     }

//     return newNode;
// }

// void add_left_child(Node *node, Node *child){
//     node ->left = child;
// }
// void add_right_child(Node *node, Node *child){
//     node ->right = child;
// }


// Node *create_tree(){
//    Node *a = create_tree_node(2);
//    Node *b = create_tree_node(7);
//    Node *c = create_tree_node(9);
//    Node *d = create_tree_node(1);
//    Node *e = create_tree_node(6);
//    Node *f = create_tree_node(5);
//    Node *g = create_tree_node(10);
//    Node *h = create_tree_node(8);
//    Node *k = create_tree_node(3);
//    Node *m = create_tree_node(4);

//    add_left_child(a,b);
//    add_right_child(a, c);
//    add_left_child(b, d);
//    add_right_child(b, e);
//    add_left_child(e, f);
//    add_right_child(e,g);
//    add_right_child(c,h);
//    add_left_child(h,k);
//    add_right_child(h,m);

//    return a;
// }


// void pre_order(Node *node)
// {

//     if (node == nullptr)
//     {
//         return;
//     }
//     cout << (node->data) << " ";
//     pre_order(node->left);
//     pre_order(node->right);
// }

// void post_order(Node *node)
// {

//     if (node == nullptr)
//     {
//         return;
//     }
//     post_order(node->left);
//     post_order(node->right);

//     cout << (node->data) << " ";
// }

// void in_order(Node *node)
// {

//     if (node == nullptr)
//     {
//         return;
//     }
//     in_order(node->left);
//     cout << (node->data) << " ";
//     in_order(node->right);
// }

// int main()
// {
//     optimize();

//     Node *root = create_tree();
//     cout<<"Root: "<<(root ->data)<<el;

//     cout<<"In Order Traversal:\n";
//     in_order(root);

//     r0;
// }



class Queue {
private:
    int* stack1;
    int* stack2;
    int capacity;
    int top1;
    int top2;

public:
    Queue(int size) {
        capacity = size;
        stack1 = new int[capacity];
        stack2 = new int[capacity];
        top1 = -1;
        top2 = -1;
    }

    ~Queue() {
        delete[] stack1;
        delete[] stack2;
    }

    void enqueue(int item) {
        if (top1 == capacity - 1) {
            std::cout << "Queue is full!" << std::endl;
            return;
        }

        stack1[++top1] = item;
    }

    int dequeue() {
        if (top1 == -1 && top2 == -1) {
            std::cout << "Queue is empty!" << std::endl;
            return -1;
        }

        if (top2 == -1) {
            while (top1 >= 0) {
                stack2[++top2] = stack1[top1--];
            }
        }

        int item = stack2[top2--];
        return item;
    }
};
