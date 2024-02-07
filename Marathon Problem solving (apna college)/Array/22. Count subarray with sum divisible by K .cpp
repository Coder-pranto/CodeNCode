//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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

int CountSubarraySumDivByK(vector<int> &v, int k)
{
    int n = v.size();
    unordered_map<int, int> hash;
    hash[0] = 1; // sum =0 , count =1
    int sum = 0, count = 0;
    for (auto i = 0; i < n; i++)
    {
        sum += v[i];
        int rem = ((sum % k) + k) % k;
        if (hash.find(rem) == hash.end())
        {
            hash[rem] = 1;
        }
        else
        {
            count += hash[rem];
            hash[rem]++;
        }
    }
    return count;
}

int main()
{
    optimize();
    vector<int> v = {4, 5, 0, -2, -3, 1}; 

    int k = 5; 

    int ans = CountSubarraySumDivByK(v, k);

    cout << ans << el;

    r0;
}
