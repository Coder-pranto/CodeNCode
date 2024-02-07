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



int SQRT(vector<int> &v, int n, int l, int r)
{
    int len = sqrtl(n) + 1;
    vector<int> block(len);

    for (auto i = 0; i < n; i++)
    {
        block[i / len] += v[i];
    }

    int sum = 0;

    while (l <= r)
    {

        if (l % len == 0 and l + len - 1 <= r)
        {
            sum += block[l / len];
            l += len;
        }
        else
        {
            sum += v[l];
            l++;
        }
    }

    return sum;
}

int main()
{
    optimize();

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
    {
        cin >> u;
    }

    int q; // Number of queries
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;
        cout << "Sum in range [" << l << ", " << r << "] = " << SQRT(v, n, l, r) << endl;
    }

    r0;
}

//* You are given an array of n integers. The array is preprocessed using Square Root Decomposition. You need to answer a set of q queries, each represented by two integers l and r. For each query, you are required to find the sum of elements in the subarray starting from index l to index r (inclusive).