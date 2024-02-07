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

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        vector<long long> pref(N, 0);
        pref[0] = Arr[0];

        // Calculate the prefix sum array
        for (auto i = 1; i < N; i++)
        {
            pref[i] = pref[i - 1] + Arr[i];
        }

        long long mx = LLONG_MIN;
        K--; // Decrement K to adjust for zero-based indexing

        for (auto i = K; i < N; i++)
        {
            long long sum;
            if (i - K == 0)
            {
                sum = pref[i];
            }
            else
            {
                sum = pref[i] - pref[i - K - 1];
            }

            mx = max(mx, sum);
        }

        return mx;
    }
};


int main()
{
    optimize();

    r0;
}