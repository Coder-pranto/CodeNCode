//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;


const int mx = 100;
struct Stack
{
    int top;
    int data[mx];
    int minVal;
};

void push(Stack *s, int value)
{
    if (s->top >= mx)
    {
        cout << "stack is full\n";
    }
    else
    {
        if (s->top == 0 || value < s->minVal)
        {
            s->data[s->top] = 2 * value - s->minVal;
            s->minVal = value;
        }
        else
        {
            s->data[s->top] = value;
        }
         s->top++;
    }
}

int pop(Stack *s){
    if(s ->top == 0){
        cout<<"stack is empty\n";
        return -1;
    }else{
         s->top -= 1;
        int item = s ->data[s ->top];

        if(item < s ->minVal){
            int prevMin = s ->minVal;
            s->minVal = 2 * s->minVal - item;
            return prevMin;
        }else{
            return item;
        }
      
    }

}

int sizeStack(Stack *s){
    return (s)->top ;
}

bool isFull(Stack *s){
    if(s ->top >=mx){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(Stack *s){
    return s ->top == 0;
}


int main()
{

    Stack st;
    st.top = 0;
    st.minVal = INT_MAX;
    push(&st, 4);
    push(&st, 3);
    push(&st, 2);
    push(&st, 1);
    push(&st, -1);

    cout<<pop(&st)<<endl;
     cout << "Minimum value in the stack: " << (st.minVal) << endl;

    return 0;
}