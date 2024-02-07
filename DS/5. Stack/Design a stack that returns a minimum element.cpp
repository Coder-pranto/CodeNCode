// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define stack_max 100

struct Stack {
    int top;
    int data[stack_max];
    int minValue;
};

void push(Stack* s, int item) {
    if (s->top < stack_max) {
        if (s->top == 0 || item < s->minValue) {
            s->data[s->top] = 2 * item - s->minValue;
            s->minValue = item;
        }
        else {
            s->data[s->top] = item;
        }
        s->top++;
    }
    else {
        cout << "Stack is Full!\n";
    }
}

int pop(Stack* s) {
    if (s->top == 0) {
        cout << "Stack is empty!\n";
        return -1;
    }
    else {
        s->top--;
        int item = s->data[s->top];
        if (item < s->minValue) {
            int prevMin = s->minValue;
            s->minValue = 2 * s->minValue - item;
            return prevMin;
        }
        else {
            return item;
        }
    }
}

bool isEmpty(Stack* s) {
    return s->top == 0;
}

int size(Stack* s) {
    return s->top;
}

int minValue(Stack* s) {
    if (s->top == 0) {
        cout << "Stack is empty!\n";
        return -1;
    }
    return s->minValue;
}

int main() {
    Stack my_stack;
    my_stack.top = 0;
    my_stack.minValue = INT_MAX;

    push(&my_stack, 3);
    push(&my_stack, 5);
    push(&my_stack, 2);
    push(&my_stack, 1);

    int item = pop(&my_stack);
    // cout << "Popped item: " << item << endl;
    // item = pop(&my_stack);
    // cout << "Popped item: " << item << endl;

    cout << "Minimum value in the stack: " << minValue(&my_stack) << endl;

    return 0;
}
