#include <bits/stdc++.h>
using namespace std;

int main() {

    // swap two numbers without temp
    int a = 8, b=7;

    a^= b;
    b^= a;
    a^= b;

    cout<<"a : "<<a<<" \nb : "<<b<<endl;

    //Given a set of numbers where all elements occur an even number of times except one number, find the odd occurring number in O(1).

    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= arr[i];
    cout << "The odd occurring element is  "<< res<<endl;
    
    return 0;
}