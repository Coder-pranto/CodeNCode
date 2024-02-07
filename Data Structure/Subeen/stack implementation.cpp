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
};


void push(Stack *s, int item){

    if(s ->top <stack_max){
        s ->data[s->top] = item;
        s ->top = s ->top +1;
    }else{
        cout<<"Stack is Full!\n";
    }

}

int pop(Stack *s){

    if(s ->top == 0){
        cout<<"Stack is empty!\n";
        return -1;
    }else{
        s ->top = s ->top -1;
         return s ->data[s->top];
    }

}


bool isEmpty(Stack* s) {
    return s->top == 0;
}

int size(Stack* s) {
    return s->top;
}


int main()
{

    Stack my_stack;
    int item;
    my_stack.top = 0;

    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);
    push(&my_stack, 4);

    item = pop(&my_stack);
    cout<<item<<endl;
    item = pop(&my_stack);
    cout<<item<<endl;

 

    return 0;
}
