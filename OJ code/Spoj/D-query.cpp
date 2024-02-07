//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define int     long long
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

const int N = 2e5 + 2;

int rootN;

struct Q {
    int idx, l, r;
};

Q q[N];

bool compare(Q q1, Q q2) {
    if (q1.l / rootN == q2.l / rootN) {
        return q1.r < q2.r;
    }
    return q1.l / rootN < q2.l / rootN;
}

signed main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& u : v) {
        cin >> u;
    }
    rootN = sqrtl(n);

    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++) {
        int l, r;
        cin >> l >> r;
        q[i].idx = i;
        q[i].l = l;
        q[i].r = r;
    }

    sort(q, q + queries, compare);

    vector<int> ans(queries);
    vector<int> freq(10*N, 0);
    int currL = 0, currR = -1;
    int currAns = 0;

    for (int i = 0; i < queries; i++) {
        int l = q[i].l, r = q[i].r;
        l--, r--;

        // Remove elements from the left
        while (currL > l) {
            currL--;
            freq[v[currL]]++;
            if (freq[v[currL]] == 1)
                currAns++;
        }

        // Remove elements from the right
        while (currR < r) {
            currR++;
            freq[v[currR]]++;
            if (freq[v[currR]] == 1)
                currAns++;
        }

        // Remove elements from the left
        while (currL < l) {
            freq[v[currL]]--;
            if (freq[v[currL]] == 0)
                currAns--;
            currL++; 
        }

        // Remove elements from the right
        while (currR > r) {
            freq[v[currR]]--;
            if (freq[v[currR]] == 0)
                currAns--;
            currR--;
        }

        ans[q[i].idx] = currAns;
    }

    for (int i = 0; i < queries; i++) {
        cout << ans[i] << endl;
    }

    r0;
}
