//
//given an array of n queries and each query given L and R
//print sum of array elements from index L to r(inclusive)


//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

int arr[N];
int pf[N];


int main()

{
    int n;
    cin>>n;
    for(int i= 1; i<=n; i++)
    {
        cin>>arr[i];
        pf[i] = pf[i-1]+arr[i];
    }


    int q;
    cin>>q;

    while(q--)
    {
        int l, r;
        cin>>l>>r;
        cout<<"Commulative sum of index "<<l<<" to "<<r<<" range : "<< pf[r] - pf[l-1]<<endl;

    }

    return 0;
}
