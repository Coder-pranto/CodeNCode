#include <iostream>

using namespace std;
#define MAX_SIZE 15 

class Stack
{
private:
    int top;         
    int arr[MAX_SIZE]; 
public:
    Stack()
    {
        top = -1; // Initialize top index to -1 (empty stack)
    }

    bool push(int x)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return 0;
        }
        // Return top element and decrement top index
        return arr[top--];
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        // Return top element without modifying top index
        return arr[top];
    }

    bool isEmpty()
    {
        return (top < 0);
    }

    bool isFull()
    {
        return (top >= MAX_SIZE - 1);
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    int min()
    {
        if (isEmpty())
        {
            return INT_MAX;
        }
        int minVal = arr[0];
        for (int i = 1; i <= top; i++)
        {
            if (arr[i] < minVal)
            {
                minVal = arr[i];
            }
        }
        return minVal;
    }
};

int main()
{

    Stack stk;
    cout << "Input some elements onto the stack:";
    stk.push(7);
    stk.push(4);
    stk.push(2);
    stk.push(5);
    stk.push(1);
    stk.push(0);
    stk.display();
    // Find the maximum value
    int max_val = stk.min();
    cout << "\nMinimum value: " << max_val << endl; // Display the minimum value
    cout << "\nRemove two elements:";
    stk.pop();
    stk.pop();
    stk.display();
    cout << "\nInput two more elements";
    stk.push(-1);
    stk.push(10);
    stk.display();
    max_val = stk.min();
    cout << "\nMinimum value: " << max_val << endl; // Display the minimum value
    cout << endl;
    return 0;
}
