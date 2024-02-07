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

//Time Complexity: O(n^r)
// Auxiliary Space : O(r)
void combination(vector<int> &v, int n, int r, int idx, vector<int> &curr_vec){
    if(r == 0){
        for(auto &u : curr_vec){
            cout<<u<<" ";
        }
        cout<<"\n";
        return;
    }

    for(auto i =idx; i<=n-r; i++){
        curr_vec.emplace_back(v[i]);
        combination(v,n, r-1,i+1, curr_vec);
        curr_vec.pop_back();
    }
}

int main()
{
    optimize();

    vector<int> v = {1, 2, 3, 4, 5};
    int r = 3;
    int n = v.size();
    int startIndex = 0;
    vector<int>curr_vec;

    combination(v, n, r, startIndex, curr_vec);

    r0;
}