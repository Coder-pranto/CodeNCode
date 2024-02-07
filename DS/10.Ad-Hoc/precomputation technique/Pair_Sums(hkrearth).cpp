//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


//hashing approach
int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    unordered_map<int,int>mp;
    for (auto &u : v)
    {
        cin >> u;
        if(mp[m - u]){
            cout<<"YES\n";
            return 0;
        }else{
            mp[u]++;
        }
    }

    cout<<"NO\n";

    r0;
}


// //two pointer approach
// int main()
// {
//     optimize();
//     int n, m;
//     cin >> n >> m;
//     vector<int> v(n);
//     for (auto &u : v)
//     {
//         cin >> u;
//     }
//     sort(all(v));

//     int l = 0, r = n - 1;

//     while (l < r)
//     {
//         if (v[l] + v[r] == m)
//         {
//             cout << "YES\n";
//             return 0;
//         }
//         else if (v[l] + v[r] > m)
//         {
//             r--;
//         }
//         else
//         {
//             l++;
//         }
//     }

//     cout << "NO\n";

//     r0;
// }