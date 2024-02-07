// BISMILLAHIR RAHMANIR RAHIM

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int Modulo = 1e9 + 7;

int main()
{
    int n= -17, mod = 5;
    int ans = n%mod;
    cout<<( ans<0  ? ans+=mod : ans )<<endl;
    
    return 0;
}
