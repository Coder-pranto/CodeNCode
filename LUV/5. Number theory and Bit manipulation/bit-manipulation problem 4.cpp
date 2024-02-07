//*Add two numbers without using arithmetic operators
#include <bits/stdc++.h>
using namespace std;

// Looping approach.
int add(int a, int b)
{

    for (int i = 1; i <= b; i++)
        a++;
    return a;
}
int add2(int a, int b)
{
    while (b != 0)
    {
        unsigned carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int add3(int x, int y)
{
    if (y == 0)
        return x;
    else
        return add3(x ^ y, (unsigned)(x & y) << 1);
}

int main()
{
    int a = 10, b = 32;
    cout << add(a, b) << "\n";
    cout << add2(a, b) << "\n";
    cout << add3(a, b) << "\n";

    int aa = 10;
    int bb = 20;

    // C++ program to Count number of bits to be flipped
    // to convert A into B
    cout << __builtin_popcount(aa ^ bb) << endl;

    return 0;
}

/* int Add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry should be unsigned to
        // deal with -ve numbers
        // carry now contains common
        //set bits of x and y
        unsigned carry = x & y;
 
        // Sum of bits of x and y where at
        //least one of the bits is not set
        x = x ^ y;
 
        // Carry is shifted by one so that adding
        // it to x gives the required sum
        y = carry << 1;
    }
    return x;
} */