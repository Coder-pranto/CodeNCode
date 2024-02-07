//BISMILLAHIR RAHMANIR RAHIM

//* Find the smallest number greater than ‘n’ with exactly 1 bit different in binary form.

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()
    long long tc;
    cin>>tc;
    while (tc--)
    {
        long long n;
        cin>>n;
        cout<<(n|n+1)<<endl;
    }
    

    r0;
}