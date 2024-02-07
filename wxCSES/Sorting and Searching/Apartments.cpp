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

    int n, m, cnt = 0;
    ll k;
    cin >> n >> m >> k;
    vector<ll> flat(n);
    vector<ll> applicant(m);
    for (auto &u : flat)
    {
        cin >> u;
    }
    for (auto &u : applicant)
    {
        cin >> u;
    }
    sort(all(flat));
    sort(all(applicant));

    int len = sz(applicant), i = 0;
    int len2 = sz(flat), j = 0;

    while (i < len && j < len2)
    {
        if (abs(applicant[i] - flat[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (applicant[i] > flat[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    cout << cnt << el;

    r0;
}