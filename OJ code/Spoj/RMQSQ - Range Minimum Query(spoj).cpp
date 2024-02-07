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


const int mod = 1e9 + 7;

// this will getting TLE for continuous preprocessing sum or (prefix sum)
int RMQSQ(vector<int> &v, int n, int l, int r)
{
    int len = (int)sqrtl(n) + 1;
    vector<int> block(len, mod);

    for (auto i = 0; i < n; i++)
    {
        block[i / len] = min(block[i/len],v[i]);
    }

    int ans = mod;

    while (l <= r)
    {

        if (l % len == 0 and l + len - 1 <= r)
        {
            ans = min(ans,block[l / len]);
            l += len;
        }
        else
        {
            ans = min(ans, v[l]);
            l++;
        }
    }

    return ans;
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
        l, r;
        cout<< RMQSQ(v, n, l, r) <<el;
    }

    r0;
}





/* //BISMILLAHIR RAHMANIR RAHIM
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


const int mod = 1e9 + 7;


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

    int len = (int)sqrtl(n) + 1;
    vector<int> block(len, mod);

    for (auto i = 0; i < n; i++)
    {
        block[i / len] = min(block[i / len], v[i]);
    }

    int q; // Number of queries
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l, r;

        int ans = mod;

        while (l <= r)
        {

            if (l % len == 0 and l + len - 1 <= r)
            {
                ans = min(ans, block[l / len]);
                l += len;
            }
            else
            {
                ans = min(ans, v[l]);
                l++;
            }
        }

        cout << ans << el;
    }

    r0;
}
 */