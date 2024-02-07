//BISMILLAHIR RAHMANIR RAHIM

//power of two or not a given number;
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    int n = 16;
    bool ck = n&(n-1);
    cout<<(ck == 0? "Yes\n": "No\n");


    r0;
}