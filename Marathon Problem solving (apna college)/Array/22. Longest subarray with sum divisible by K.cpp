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

int LongestSubarraySum(vector<int> &v, int k)
{
    int n = v.size();
    unordered_map<int, int> hash;
    hash.insert({0, -1}); // sum =0 , index =-1
    int sum = 0, ans = 0;
    for (auto i = 0; i < n; i++)
    {
        sum += v[i];
        int rem = ((sum % k) + k) % k;
        if (hash.find(rem) == hash.end())
        {
            hash.insert({rem, i});
        }
        else
        {
            ans = max(ans, (i - hash[rem]));
        }
    }
    return ans;
}
int main()
{
    optimize();
    vector<int> v= {2, 7, 6, 1, 4, 5};
    // vector<int> v= {-2, 2, -5, 12, -11, -1, 7};
    // vector<int> v= {1, 2 ,-2, 2, 2};
    int  k = 3;

    int ans = LongestSubarraySum(v,k);

    cout<<ans<<el;

    r0;
}