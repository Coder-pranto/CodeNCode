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

int main()
{
    optimize();

    kase
    {
      ll n;
        cin >> n;
        vector<ll> v(n);

        for (auto &i : v)
        {
            cin >> i;
        }

        ll cnt = 0;
        ll prefixSum = 0;
        unordered_map<ll, ll> prefixSumCount;
        prefixSumCount[0] = 1; // To handle subarrays starting from index 0

        for (int i = 0; i < n; i++)
        {
            prefixSum += v[i];
            if (prefixSumCount.find(prefixSum) != prefixSumCount.end())
            {
                cnt += prefixSumCount[prefixSum];
            }
            prefixSumCount[prefixSum]++;
        }

        cout << cnt <<el;
    }

    r0;
}