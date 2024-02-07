//BISMILLAHIR RAHMANIR RAHIM

//*Flip the all bits of a Positive Number
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

        int n = 10;
    int bits = floor(log2(n) + 1);
    int m = 1 << (bits - 1);
    m = m | m - 1;
    cout << (n ^ m) << el;

    r0;
}