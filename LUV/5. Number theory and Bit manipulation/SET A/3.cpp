//BISMILLAHIR RAHMANIR RAHIM
//*count the number of bits in a binary number
//*count the number of digits in a decimal number
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()
    int n = 1234;
    int b = 32;

    cout<< floor(log10(n)+1)<<endl;
    cout<< floor(log2(b)+1)<<endl;

    r0;
}