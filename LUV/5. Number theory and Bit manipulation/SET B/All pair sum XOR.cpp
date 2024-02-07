//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

    vector<int> v = {2,3,5};
    int n = v.size();
    int ans = v[0]*2;
    for (size_t i = 1; i < n; i++)
    {
       // ans ^=(v[i]*2);
        ans ^=(v[i]<<1);//little bit faster
    }
    cout<<ans<<el;
    

    r0;
}