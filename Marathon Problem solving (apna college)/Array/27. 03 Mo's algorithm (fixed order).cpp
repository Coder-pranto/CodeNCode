#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;

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

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& u : v) {
        cin >> u;
    }
    rootN = sqrt(n);

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
    int currL = 0, currR = -1;
    int currAns = 0;

    for (int i = 0; i < queries; i++) {
        int l = q[i].l, r = q[i].r;
        l--, r--;
        while (currR < r) {
            currAns += v[++currR];
        }

        while (currL > l) {
            currAns += v[--currL];
        }

        while (currL < l) {
            currAns -= v[currL++];
        }

        while (currR > r) {
            currAns -= v[currR--];
        }

        ans[q[i].idx] = currAns;
    }

    for (int i = 0; i < queries; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
