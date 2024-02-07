//BISMILLAHIR RAHMANIR RAHIM

//*https://www.hackerrank.com/challenges/sum-vs-xor/problem
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

      long long n;
       cin>>n;

       int bits = floor(log2(n)+1);
       int set_bits = __builtin_popcountll(n);
       int unset_bits = bits - set_bits;
       cout<<(1LL<<unset_bits)<<el;

    r0;
}