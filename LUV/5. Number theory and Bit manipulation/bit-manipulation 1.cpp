#include <bits/stdc++.h>

using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    puts("");
}

int main()
{

    int num = 13;
    printBinary(num);

    /// n-th bit of any number to check whether it is set or not

    int n = 14;
    int i = 3;
    cout << (n & (1 << i) != 0 ? "Set" : "Unset") << endl; // i-th bit checking , whether it is set or unset

    // bit set

    int m = 10;
    int ii = 2;
    printBinary((m | (1 << ii)));

    // bit unset

    int nn = 10;
    int ij = 3;
    printBinary((nn & (~(1 << ij))));

    // toggle

    int mm = 15;
    int jj = 1;

    printBinary((mm ^ (1 << jj)));

    // count set bit
    int ans = 23;
    int ct = 0;
    for (int i = 31; i >= 0; --i)
    {
        if ((ans & (1 << i)) != 0)
            ct++;
    }

    cout <<"Count set bit: "<< ct << endl;

    cout<<"Count set bit(built in): " << __builtin_popcount(ans) << endl;
    cout<<"Count set bit(built in): " << __builtin_popcountll((1LL << 35) - 1) << endl;
    

    return 0;
}
