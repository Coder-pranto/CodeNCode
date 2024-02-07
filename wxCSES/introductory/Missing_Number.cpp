//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    int n;
    cin>>n;
    int ans = 0;
    for(auto i =1; i<=n; i++)
    ans ^=i;

    for(int i =0; i<n-1; i++){
        int x ;
        cin>>x;
        ans ^=x;
    }

    cout<<ans<<el;

    r0;
}